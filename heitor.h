#include <stdio.h>
#include <stdlib.h>


void movimento1()
{
	int lin, col, linn, coln, guerra;
		
		
	printf("coloque as coordenadas do soldado para mover e para onde deve ir ");
	scanf("%d %d %d %d", &lin, &col, &linn, &coln);
		if(lin > 1 && col > 1 && lin < 6 && col < 12)
		{
			if(linn - lin == 1 || linn - lin == -1)
			{
				guerra = mapa[lin][col]; 
				mapa [lin][col] = ' ';
				mapa [linn][col] = guerra;
		
    		}
    		else if(coln - col == 1 || coln - col == -1)
    		{
    			guerra = mapa[lin][col]; 
    			mapa [lin][col] = ' ';
				mapa [lin][coln] = guerra;
		
			}
			else
			{
				system("cls");
				imprimirmapa();
				printf("\n coordenadas invalidas\n");
				movimento1();
			}
		}
}

void movimento2()
{
	int lin, col, linn, coln, guerra;
		
		
	printf("coloque as coordenadas do soldado para mover e para onde deve ir ");
	scanf("%d %d %d %d", &lin, &col, &linn, &coln);
		if(lin > 1 && col > 7 && lin < 12 && col < 12)
		{
			if(linn - lin == 1 || linn - lin ==-1 )
			{
				guerra = mapa[lin][col]; 
				mapa [lin][col] = ' ';
				mapa [linn][col] = guerra;
		
    		}
    		else if(coln - col == 1 || coln - col == -1)
    		{
    			guerra = mapa[lin][col]; 
    			mapa [lin][col] = ' ';
				mapa [lin][coln] = guerra;
		
			}
			else
			{
				system("cls");
				imprimirmapa();
				printf("\n coordenadas invalidas\n");
				movimento2();
			}
		}
}

	void ataque1(){
		int lin, col, linv, colv, guerra;
		
	printf("coloque as coordenadas do atacante e do alvo");
	scanf("%d %d %d %d", &lin, &col, &linv, &colv);
	guerra = mapa[lin][col];
	printf("%d", guerra);
		//if(lin > 1 && col > 1 && lin < 6 && col < 12)
		//{
		for(;;)
		{
		
			if(guerra == 1)
			{
				if(col == colv)
				{
					mapa [linv][colv] = ' ';
					break;
				}	
			}	
			else
			{
				system("cls");
				imprimirmapa();
				printf("\nAtaque invalido\n");
				ataque();
			}
		}
	}
	
	void ataque2()
	{
		int lin, col, linv, colv, guerra;
		//else if(guerra == y)
		//{
	 		if(linv - lin == colv - col || linv - lin == col - colv || lin - linv == colv - col )
				{
			 		mapa [linv][colv] = ' ';
		
			    }
		//}
	}
	
