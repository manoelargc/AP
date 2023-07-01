#include <stdio.h>

    int main(){

    float pi=3.14;
    float raio=2.0;
    float area;
    area= pi*raio*raio;


    printf("Ola! Sou uma calculadora de areas da circunferencia :) \n A formula eh dada por exemplo: pi*raio^2 \n A= %.2f*%.2f^2 \n neste exemplo o raio vale 2, entao: \n A= %.2f \n", pi, raio, area);
    printf("Digite o raio da circunferencia que deseja descobrir a area:");
    scanf("%f", & raio);
    float novaarea= pi*raio*raio;
    printf("A area da circunferencia eh: %.2f*%.2f*%.2f= %.2f \n", pi, raio, raio, novaarea);
}