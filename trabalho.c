#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char *fazerlogin()
{
    static char name[20]; // alterado para array estático
    while (true)
    {
        printf("Digite nome de login:  ");
        scanf("%s", name); // removido o operador & e alterado o formato de leitura
        if (strcmp(name, "admin") == 0)
        {
            printf("Sistema on !!!  ");
            return "Sistema logado !!!";
        }
    }

    return name;
}

int main()
{

    // Validação do login senha admin
    // fazerlogin();

    char cadeiras[10][10]; // matriz cadeiras
    int i, j, k;
    char cont, program;
    char nome[50];

    // Preencher a matriz de cadeiras com assentos disponíveis
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            cadeiras[i][j] = 'O'; // 'O' representa um assento disponível
        }
    }

    do
    {
        printf("Cadeiras disponiveis !\n");
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                printf("%c ", cadeiras[i][j]);
            }
            printf("\n");
        }
        do
        {
            printf("Digite o assento desejado: \n ");
            int cadeira;
            scanf("%d", &cadeira);
            printf("Cadeiras disponiveis !\n");
            int linha = cadeira / 10;  // calcular a linha
            int coluna = cadeira % 10; // calcular a coluna
            int k;

            if (cadeiras[linha][coluna] == 'O') // verificar se o assento está disponível
            {
                printf("Assento marcado: %d \n", cadeira);
                printf("Digite seu nome: \n");
                scanf("%s", nome);

                cadeiras[linha][coluna] = 'X'; // 'X' representa um assento marcado
            }
            else
            {
                printf("Assento indisponivel.\n");
            }
            for (k = 0; k < 10; k++)
            {
                for (j = 0; j < 10; j++)
                {
                    printf("%c ", cadeiras[k][j]);
                }
                printf("\n");
            }
            printf("Deseja marcar outro assento ? S/N \n");
            scanf(" %c", &cont);
        } while (cont == 'S');

        printf("Continuar com logado? S/N\n");
        scanf(" %c", &program);
    } while (program == 'S');

    return 0;
}

struct Perfil
{
    char nome;
    int acento;
};