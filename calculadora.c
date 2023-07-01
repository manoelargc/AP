#include <stdio.h>
#include <stdlib.h>

    /*LAB12 - 26/07/22 
    
    Calculadora com operações básicas e potenciação*/

void soma (int x, int y)
{
int resultado;
resultado = x+y;
printf("%d + %d = %d\n", x, y,resultado );
}
 
void sub (int x, int y)
{
int resultado;
resultado = x-y;
printf("%d - %d = %d\n", x, y,resultado );
}
 
void mult (int x, int y)
{
int resultado;
resultado = x*y;
printf("%d * %d = %d\n", x, y,resultado );
}
 
void divi (float x, float y)
{
float resultado;
if (x==0 || y==0){
printf ("Nao é possivel dividir por zero!!!");
}
else{
resultado = x/y;
printf("%.0f / %.0f = %.2f\n", x, y,resultado );
}
}
 
void potencia(int x, int y){

int resultado = pow(x,y);
printf("%d ^ %d = %d\n", x, y,resultado );
}

int main (void)
{
int n1, n2;
float div1, div2;
char op;
 
printf ("\nAdicao (+)\nSubtracao (-)\nDivisao (/)\nMultiplicacao (*)\nPotenciacao (^)\nDigite o operador a ser utilizado:");
 
scanf ("%c", &op);
 
switch (op){
case '+': 
printf ("A operacao escolhida foi ADICAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &n1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &n2);
soma(n1, n2);
break;
 
case '-':
printf ("A operacao escolhida foi SUBTRACAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &n1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &n2);
sub(n1, n2);
break;
 
case '*':
printf ("A operacao escolhida foi MULTIPLICACAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%d", &n1);
printf ("Insira o segundo numero:\n");
scanf ("%d", &n2);
mult(n1, n2);
break;
 
case '/':
printf ("A operacao escolhida foi DIVISAO\n");
printf ("Insira o primeiro numero:\n");
scanf ("%f", &div1);
printf ("Insira o segundo numero:\n");
scanf ("%f", &div2);
divi(div1, div2);
break;

 
case '^':
printf ("A operacao escolhida foi POTENCIACAO\n");
printf ("Insira a base:\n");
scanf ("%d", &n1);
printf ("Insira o expoente:\n");
scanf ("%d", &n2);
potencia(n1,n2);
break;
 
default:
printf ("OPCAO INVALIDA\n");
}
 
return 0;
}