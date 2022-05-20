#include <stdio.h>

    int main (){
    
    int p1= 0;
    int p2= 0;
    int p3= 0;
    int p4= 0;

    printf("Digite a nota obtida na P1 (0-100): ");
    scanf("%d", & p1);
    printf("Digite a nota obtida na P1 (0-100): ");
    scanf("%d", & p2);
    printf("Digite a nota obtida na P3 (0-100): ");
    scanf("%d", & p3);
    printf("Digite a nota obtida na P4 (0-100): ");
    scanf("%d", & p4);

    float s1= (p1+p2)/2.00;
    float s2= (p3+p4)/2.00;
    float total= (s1+s2)/2.00;

    
    printf("Nota na P1= %d \nNota na P2= %d \nNota na P3= %d \nNota na P4= %d\n\n", p1, p2, p3, p4);
    printf("Media no 1o semestre= %.2f\nMedia no 2o semestre= %.2f \nMedia anual= %.2f \n", s1, s2, total);
    
    }