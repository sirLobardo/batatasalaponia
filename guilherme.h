#include <stdio.h>
#include <stdlib.h>

int main()
{
	char mapa[13][13] = {
		{' ', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12'},
		{'1 ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'2 ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'3 ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'4 ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'5 ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'6 ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
		{'7 ', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~'},
		{'8 ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'9 ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'10', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'11', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
		{'12', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}

	};

	void imprimirmapa()
	{
		int lin, col;
		for (lin = 0; lin < 13; lin++)
		{
			for (col = 0; col < 13; col++)
			{
				printf("%c", mapa[lin][col]);
			}
			printf("\n");
		}
	}
