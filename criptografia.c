#include <stdio.h>
#include <ctype.h>

int main()
{
    char frase[200];
    int i, n;

	printf("Ola usuario! Quantas posicoes quer deslocar?");
	scanf("%d", &n);
    fflush(stdin);
    printf("Digite uma frase: ");
    gets(frase);
    
    for(i=0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])){ 
            frase[i] = toupper(frase[i]) + n; //deixa maiuscula e soma n digitado pelo usuario
            if (frase[i] > 'Z'){ 
                frase[i] = frase[i] - 'Z' + 'A' - 1; 
            }
        }
    }
    
    
    printf("posicoes deslocadas= %d\nfrase criptografada= '%s'\n", n, frase);
    
    return 0;
}