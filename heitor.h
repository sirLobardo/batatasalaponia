void movimento1()
{
	int lin, col, linn, coln, guerra;
		
		
	printf("Coloque as coordenadas do soldado para mover e para onde deve ir:  ");
	scanf("%d %d %d %d", &lin, &col, &linn, &coln);
		if(lin > 1 && col > 1 && lin < 6 && col < 12)
		{
			if(linn - lin == 1 || linn - lin == -1)
			{
				guerra = mapa[lin][col]; 
				mapa [lin][col] = ' ';
				mapa [linn][col] = guerra;
				system("cls");
				imprimirmapa();
		
    		}
    		else if(coln - col == 1 || coln - col == -1)
    		{
    			guerra = mapa[lin][col]; 
    			mapa [lin][col] = ' ';
				mapa [lin][coln] = guerra;
				system("cls");
				imprimirmapa();
		
			}
			else
			{
				system("cls");
				imprimirmapa();
				printf("\ncoordenadas invalidas\n");
				movimento1();
			}
		}
}

void movimento2()
{
	int lin, col, linn, coln, guerra;
		
		
	printf("Coloque as coordenadas do soldado para mover e para onde deve ir:  ");
	scanf("%d %d %d %d", &lin, &col, &linn, &coln);
		if(lin > 1 && col > 7 && lin < 12 && col < 12)
		{
			if(linn - lin == 1 || linn - lin ==-1 )
			{
				guerra = mapa[lin][col]; 
				mapa [lin][col] = ' ';
				mapa [linn][col] = guerra;
				system("cls");
				imprimirmapa();
		
    		}
    		else if(coln - col == 1 || coln - col == -1)
    		{
    			guerra = mapa[lin][col]; 
    			mapa [lin][col] = ' ';
				mapa [lin][coln] = guerra;
				system("cls");
				imprimirmapa();
		
			}
			else
			{
				system("cls");
				imprimirmapa();
				printf("\nCoordenadas invalidas\n");
				movimento2();
			}
		}
}

	void ataque(){
		int lin, col, linv, colv, alvo;	
	printf("Coloque as coordenadas do atacante e do alvo: ");
	scanf(" %d %d %d %d", &lin, &col, &linv, &colv);
		if(mapa[lin][col] == '1' && col == colv){
			mapa[linv][colv] = ' ';
			system("cls");
			imprimirmapa();			
			}
		else if(mapa[lin][col] == '2' && abs(linv - lin) == abs(colv - col)){
			mapa [linv][colv] = ' ';
			system("cls");
			imprimirmapa();
		}		
			else
			{
				
				system("cls");
				imprimirmapa();
				printf("\nAtaque invalido\n");
				printf("%d\n", mapa[lin][col]);
				ataque();
			}
	
}
	
