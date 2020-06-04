#include <stdio.h>
#include <stdlib.h>

void imprimirmapa()
{
	int lin, col;
	for (lin = 0; lin < 15; lin++)
	{
		for (col = 0; col < 15; col++)
		{
			printf("%c", mapa[lin][col]);
		}
		printf("\n");
	}
}
