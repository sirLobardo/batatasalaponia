#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char nome1[100], jogador2[100];
void imprimirmapa()
{
	int lin, col;
	for (lin = 0; lin < 14; lin++)
	{
		for (col = 0; col < 14; col++)
		{
			printf("%3c", mapa[lin][col]);
		}
		printf("\n");
	}
}
void marcar1(int lin, int col)
{
	if (col < 2 || lin < 2 || col > 11 || lin > 11)
	{
		printf("\n\n");
	}
	else
	{
		mapa[lin][col] = '1';
	}
}

void marcar2(int lin, int col)
{
	if (col < 2 || lin < 2 || col > 11 || lin > 11)
	{
		printf("\n\n");
	}
	else
	{
		mapa[lin][col] = '2';
	}
}

void heroinorte(int lin, int col)
{
	if (lin < 2 || lin > 5 || col < 2 || col > 11)
	{
		printf("\n\n");
	}
	else
	{
		mapa[lin][col] = '#';
	}
}

void heroisul(int lin, int col)
{
	if (col < 2 || lin < 8 || col > 11 || lin > 11)
	{
		printf("\n\n");
	}
	else
	{
		mapa[lin][col] = '@';
	}
}
/*
void nomejogador1()
{
	int tamanho;
	char nome1[100];
	printf("Digite o seu Nome: ");
	fgets(nome1, 100, stdin);
	tamanho = strlen(nome1);
}

void nomejogador2()
{
	int tamanho;
	char nome2[100];
	printf("Digite o seu Nome: ");
	fgets(nome2, 100, stdin);
	tamanho = strlen(nome2);
}
*/
char random()
{
	int tamanho;
	char nome1[100], nome2[100];
	printf("Digite o nome do player1: ");
	scanf("%s", &nome1);
	tamanho = strlen(nome1);

	printf("Digite o nome do player2: ");
	scanf("%s", &nome2);
	tamanho = strlen(nome2);
	srand(time(NULL));

	{
		if (rand() % 11 >= 6)
		{
			printf("\nQuem comeca eh o(a) jogador(a) %s\n", nome1);
		}
		else
		{
			printf("\nQuem comeca eh o(a) jogador(a) %s\n", nome2);
		}
	}
	return nome1;
}

void marcarsoldados()
{
	int i, j, cont, soldado;
	printf("\n\n");
	printf("O jogador %s", nome1);
	for (cont = 1; cont <= 8; cont++)
	{
		for (;;)
		{

			printf("Digite o tipo de soldado e a linha e a coluna que deseja posicionar o soldado no norte: ");
			scanf("%d %d %d", &soldado, &i, &j);
			if (i > 1 && j > 1 && i < 6 && j < 12)
			{

				if (soldado == 1)
				{
					system("cls");
					marcar1(i, j);
					printf("\n\n");
					imprimirmapa();
					printf("O jogador %s", nome1);
					break;
				}
				else if (soldado == 2)
				{
					system("cls");
					marcar2(i, j);
					printf("\n\n");
					imprimirmapa();
					printf("O jogador %s", nome1);
					break;
				}
				else if (soldado != 1 || soldado != 2)
				{
					system("cls");
					printf("\n\n");
					imprimirmapa();
					printf("So eh possivel marcar soldado do tipo 1 ou 2\n\n");
				}
			}
			else
			{
				system("cls");
				printf("\ncoordenadas invalidas\n\n");
				imprimirmapa();
			}
		}
		for (;;)
		{
			printf("Digite o tipo de soldado e a linha e a coluna que deseja posicionar o soldado no sul: ");
			scanf("%d %d %d", &soldado, &i, &j);
			if (j > 1 && i > 7 && j < 12 && i < 12)
			{
				if (soldado == 1)
				{
					system("cls");
					marcar1(i, j);
					printf("\n\n");
					imprimirmapa();
					break;
				}
				else if (soldado == 2)
				{
					system("cls");
					marcar2(i, j);
					printf("\n\n");
					imprimirmapa();
					break;
				}
				else if (soldado != 1 || soldado != 2)
				{
					system("cls");
					printf("\n\n");
					imprimirmapa();
					printf("So eh possivel marcar soldado do tipo 1 ou 2\n\n");
				}
			}
			else
			{
				system("cls");
				printf("\n\n");
				printf("\ncoordenadas invalidas\n\n");
				imprimirmapa();
			}
		}
	}
	for (;;)
	{
		printf("Digite a localização do soldado especial do norte: ");
		scanf("%d %d", &i, &j);
		if (i > 1 && j > 1 && i < 6 && j < 12)
		{
			system("cls");
			heroinorte(i, j);
			printf("\n\n");
			imprimirmapa();
			break;
		}
		system("cls");
		printf("\ncoordenadas invalidas\n\n");
		imprimirmapa();
	}
	for (;;)
	{
		printf("Digite a localização do soldado especial do sul: ");
		scanf("%d %d", &i, &j);
		if (j > 1 && i > 7 && j < 12 && i < 12)
		{
			system("cls");
			heroisul(i, j);
			printf("\ncoordenadas invalidas\n\n");
			imprimirmapa();
			break;
		}
		system("cls");
		printf("\ncoordenadas invalidas\n\n");
		imprimirmapa();
	}
}