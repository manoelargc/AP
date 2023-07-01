#include <stdio.h>
#include <string.h>

int main()
{

    int i, valor;
    char pnf_normal[40]; //pnf= palavra numero frase
    char invertida[40];

    printf("Digite uma palavra/numero/frase(sem espaco): ");
    gets(pnf_normal);

    // passar pra minúscula
    for (i = 0; pnf_normal[i]; i++)
    {
        pnf_normal[i] = tolower(pnf_normal[i]);
    }

    // copiar oq digitou
    strcpy(invertida, pnf_normal);

    // inverter o copiado
    strrev(invertida);

    valor = strcmp(pnf_normal, invertida);

    if (valor == 0)
        printf("%s eh palindroma\n", pnf_normal);
    else
        printf("%s nao eh palindroma\n", pnf_normal);

    return 0;
}