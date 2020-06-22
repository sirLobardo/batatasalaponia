#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

void imprimirmapa()
{
	mapa[14][14];
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
	if (lin < 2 || lin > 5 || col < 2 || col > 11)
	{
		printf("coordenadas invalidas\n\n");
	}
	else
	{
		mapa[lin][col] = '1';
	}
}

void marcar2(int lin, int col)
{
	if (col < 2 || lin < 8 || col > 11 || lin > 11)
	{
		printf("coordenadas invalidas\n\n");
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
		printf("coordenadas invalidas\n\n");
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
		printf("coordenadas invalidas\n\n");
	}
	else
	{
		mapa[lin][col] = '@';
	}
}

void nomejogador1()
{
	int tamanho;
	char nome1[100];
	scanf("%s", &nome1);
	tamanho = strlen(nome1);
	printf("Eh a vez do(a) jogador(a): %s", nome1);
}

void nomejogador2()
{
	int tamanho;
	char nome2[100];
	scanf("%s", &nome2);
	tamanho = strlen(nome2);
	printf("Eh a vez do(a) jogador(a): %s", nome2);
}

void random()
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
}

void marcarsoldados()
{
	int i, j, cont, soldado;
	random();
	system("pause");
	system("cls");
	imprimirmapa();
	for (cont = 1; cont <= 8; cont++)
	{
		for (;;)
		{
			printf("Digite o tipo de soldado e a linha e a coluna que deseja posicionar o soldado 1: ");
			scanf("%d %d %d", &soldado, &i, &j);
			if (i > 1 && j > 1 && i < 6 && j < 12)
			{

				if (soldado == 1)
				{
					system("cls");
					marcar1(i, j);
					imprimirmapa();
					break;
				}
				else if (soldado == 2)
				{
					system("cls");
					marcar2(i, j);
					imprimirmapa();
					break;
				}
				else if (soldado != 1 || soldado != 2)
				{
					system("cls");
					imprimirmapa();
					printf("So eh possivel marcar soldado do tipo 1 ou 2\n\n");
				}
			}
			else
			{
				system("cls");
				imprimirmapa();
				printf("coordenadas invalidas\n");
			}
		}
		for (;;)
		{
			printf("Digite o tipo de soldado e a linha e a coluna que deseja posicionar o soldado 2: ");
			scanf("%d %d %d", &soldado, &i, &j);
			if (j > 1 && i > 7 && j < 12 && i < 12)
			{
				if (soldado == 1)
				{
					system("cls");
					marcar1(i, j);
					imprimirmapa();
					break;
				}
				else if (soldado == 2)
				{
					system("cls");
					marcar2(i, j);
					imprimirmapa();
					break;
				}
				else if (soldado != 1 || soldado != 2)
				{
					system("cls");
					imprimirmapa();
					printf("So eh possivel marcar soldado do tipo 1 ou 2\n\n");
				}
			}
			else
			{
				system("cls");
				imprimirmapa();
				printf("coordenadas invalidas\n");
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
			imprimirmapa();
			break;
		}
		system("cls");
		imprimirmapa();
		printf("coordenadas invalidas\n");
	}
	for (;;)
	{
		printf("Digite a localização do soldado especial do sul: ");
		scanf("%d %d", &i, &j);
		if (j > 1 && i > 7 && j < 12 && i < 12)
		{
			system("cls");
			heroisul(i, j);
			imprimirmapa();
			break;
		}
		system("cls");
		imprimirmapa();
		printf("coordenadas invalidas\n");
	}
}
