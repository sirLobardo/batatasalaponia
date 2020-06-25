void movimento1()
{
	int lin, col, linn, coln, guerra;
		
		
	printf("Coloque as coordenadas do soldado para mover e para onde deve ir:  ");
	scanf("%d %d %d %d", &lin, &col, &linn, &coln);
		if(lin > 1 && col > 1 && lin < 6 && col < 12)
		{
			if((linn - lin == 1 || linn - lin == -1) && linn > 1 && linn < 6 )
			{
				guerra = mapa[lin][col]; 
				mapa [lin][col] = ' ';
				mapa [linn][col] = guerra;
				system("cls");
				imprimirmapa();
		
    		}
    		else if((coln - col == 1 || coln - col == -1) && coln > 1 && coln < 12)
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
		if(col > 1 && lin > 7 && col < 12 && lin < 12)
		{
			if((linn - lin == 1 || linn - lin == -1) && linn < 12 && linn > 7)
			{
				guerra = mapa[lin][col]; 
				mapa [lin][col] = ' ';
				mapa [linn][col] = guerra;
				system("cls");
				imprimirmapa();
		
    		}
    		else if((coln - col == 1 || coln - col == -1) && coln > 1 && coln < 12 )
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
				ataque();
			}
	
}

void atkesps(){
	int linv, colv;
	printf("Coloque as coordenadas do alvo: ");
	scanf(" %d %d",&linv, &colv);
	mapa[linv][colv] = ' ';
	system("cls");
	imprimirmapa();

}

void atkespn(){
	int linv, colv;
	printf("Coloque as coordenadas do centro do ataque: ");
	scanf(" %d %d",&linv, &colv);
	if(linv > 8 && linv < 11 && colv > 2 && colv < 11){
		mapa[linv][colv] = ' ';
		mapa[linv - 1][colv] = ' ';
		mapa[linv][colv - 1] = ' ';
		mapa[linv + 1][colv] = ' ';
		mapa[linv][colv + 1] = ' ';
		mapa[linv + 1][colv + 1] = ' ';
		mapa[linv - 1][colv - 1] = ' ';
		mapa[linv - 1][colv + 1] = ' ';
		mapa[linv + 1][colv- 1] = ' ';
		system("cls");
		imprimirmapa();	
	}
}

	void movespno()
{
	int lin, col, linn, coln, guerra;
		
		
	printf("Coloque as coordenadas do soldado para mover e para onde deve ir:  ");
	scanf("%d %d %d %d", &lin, &col, &linn, &coln);
		if(lin > 1 && col > 1 && lin < 6 && col < 12)
		{
			if((linn - lin <= 3 || linn - lin >= -3) && linn > 1 && linn < 6 )
			{
				guerra = mapa[lin][col]; 
				mapa [lin][col] = ' ';
				mapa [linn][col] = guerra;
				system("cls");
				imprimirmapa();
		
    		}
    		else if((coln - col <= 10 || coln - col >= -10) && coln > 1 && coln < 12)
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
