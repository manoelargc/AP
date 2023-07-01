#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <conio.h>
#define linhas 14
#define colunas 60

/* EP11 - 27/07/22
organizar a imagem da televisão manipulando as linhas e colunas da matriz
*/

void preencheMatriz(char image[linhas][colunas])
{
    int i, j;
    strcpy(image[0], "   !      _\\\\   O     \\         ||\\_        \\\\            \\  ");
    strcpy(image[1], "   !          ==||     \\        \\\\           LL            \\ ");
    strcpy(image[2], "\\  !            //      \\        LL                          ");
    strcpy(image[3], " \\ !           _\\\\       \\         \\                         ");
    strcpy(image[4], "__\\!______________________\\         \\_______________________ ");
    strcpy(image[5], "                                                             ");
    strcpy(image[6], "                                                             ");
    strcpy(image[7], "                                                       !###  ");
    strcpy(image[8], "                                                       ! ### ");
    strcpy(image[9], "#                                                      !  ## ");
    strcpy(image[10], "##                                                     !   #");
    strcpy(image[11], "###________O_______               @   _________________!____");
    strcpy(image[12], " ##!     ==||       \\           /            O          \\   ");
    strcpy(image[13], "  #!       //        \\          \\O         /||--         \\  ");
}

void printMatriz(char image[linhas][colunas])
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%c", image[i][j]);
        }
        printf("\n");
    }
}

void cima(char image[linhas][colunas])
{
      int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            if (i==13)
            {
                image[i][j]=image[0][j];
            }
            else{
            image[i][j] = image[i + 1][j];
            }
        }
    }
}

void baixo(char image[linhas][colunas])
{
     int i, j;
    for (i = 14; i >= 0; i--)
    {
        for (j = 0; j < colunas; j++)
        {
            if (i==0)
            {
                image[i][j]= image[14][j];
            }

            else{
            image[i][j] = image[i - 1][j];
            }
        }
    }
}

void esquerda(char image[linhas][colunas])
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 59; j >= 0; j--)
        {
            if (i == 0)
            {
                image[i][j]= image[i][59];
            }
            else{
            image[i][j] = image[i][j - 1];
            }
        }
    }
}

void direita(char image[linhas][colunas])
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
             if (i == 59)
            {
                image[i][j]= image[i][0];
            }
            else{
            image[i][j] = image[i][j + 1];
            }
        }
    }
}

void automatica(char image[linhas][colunas])
{
    int i=0;
    while (i<5)
    {
        cima(image);
        i++;
    }
    while (i<35)
    {
        direita(image);
        i++;
    }
    
}

int menu()
{
    int opcao;
    printf("\n\n");
    printf("Menu:\n");
    printf("1 - Cima\n");
    printf("2 - Baixo\n");
    printf("3 - Esquerda\n");
    printf("4 - Direita\n");
    printf("5 - Automatico\n");
    printf("6 - Sair\n");
    printf("Digite uma opcao: ");
    //scanf("%d", &opcao);
    opcao = getch();
    return opcao;
}

int main()
{
    char image[linhas][colunas];
    int opcao;

    
    preencheMatriz(image);
    do
    {
        printMatriz(image);
        opcao = menu();
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: // deslocar para cima
            cima(image);
            break;
        case 2: // deslocar para baixo
            baixo(image);
            break;
        case 3: // deslocar para esquerda
            esquerda(image);
            break;
        case 4: // deslocar para direita
            direita(image);
            break;
        case 5:
            automatica(image);
            break;
        case 6:
            printf("Tchau!\n");
            break;
        }
        //system("cls");
    } while (opcao != 6);
}