#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>

int i, j, altura = 5, largura = 10;
int gameover, score, count_borda;
int x, y, alagadx, alagady, flag;

void setup()
{
    gameover = 0;

    // Stores altura e largura
    x = 1;
    y = 1;

    alagadx = 2;
    alagady = 5;
}

// desenhar o mapa e elementos
void draw()
{
    system("cls");
    for (i = 0; i < altura; i++)// coluna
    { 
        for (j = 0; j < largura; j++)// linha
        { 
            if (i == 0 || j == 0 )//linha x coluna (base matriz)
            {
                
            }
            else
            {
                if (i == x && j == y)
                {
                    printf("M "); // maquina
                    score++;
                }
                else if (i == alagadx && j == alagady)
                {
                    printf("+ "); // area alagada
                }
                
                else
                {
                    printf("# ");
                }
            }
        }
        printf("\n"); 
    }
    printf("\n>>COLHEITA FELIZ<<\n\nMenu:\n1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");

    // printf("pontuacao = %d", score-1);
    printf("\n");
    printf("pressione X para sair do jogo");
}

// direcoes
void input()
{
    switch (getch())
    {
    case '3': // esquerda
        flag = 1;
        break;
    case '2': // baixo
        flag = 2;
        break;
    case '4': // direita
        flag = 3;
        break;
    case '1': // cima
        flag = 4;
        break;
    case 'x':
        printf("\npontuacao = %d\n", score - 1);
        gameover = 1;
        break;
    }
}

// cada movimentacao
void logic()
{
    switch (flag)
    {
    case 1:
        y--;
        break;
    case 2:
        x++;
        break;
    case 3:
        y++;
        break;
    case 4:
        x--;
        break;
    default:
        break;
    }

    // se saiu da borda
    if (x < 1 || x > altura || y < 1 || y > largura)
        setup();
    count_borda++;
    // volta p/ o mapa e zera os pontos

    // se caiu na parte alagada
    if (x == 2 && y == 4)
    {

        printf("\n\n>>>>CAIU EM AREA ALAGADA, FIM DE JOGO\npontuacao = %d\n", score - 1);
        gameover = 1;
    }
}

void main()
{
    int m, n;

    // spawnar
    setup();

    // ate colher toda lavoura
    while (!gameover)
    {

        draw();
        input();
        logic();

        if (score == 31) //se colheu todos 
        {
            printf("\n\n>>>>PARABENS! VOCE COLHEU TODA A LAVOURA!\npontuacao = %d\n", score - 1);
            gameover = 1;
        }
    }
}