int testen = 0,  testes = 0;

void checkn(){
int lin, col, vitoria;
	for(lin=2; lin<6; lin++){
			for(col=2; col<12; col++){
			  	vitoria += mapa[lin][col];
			  	if(vitoria == 1280){   					
			  			printf(" sul venceu \n");
			  			system("pause");
			  			exit(0);
			  	}
			}
		}
	}

void checks(){
int lin, col, vitoria;
	for(lin=8; lin<11; lin++){
			for(col=2; col<12; col++){
			  	vitoria += mapa[lin][col];
			  	if(vitoria == 1280){   					
			  			printf(" norte venceu \n");
			  			system("pause");
			  			exit(0);
			  	}
			}
		}
	}

void atkmovn()
{
	char x;
	printf("Vez do norte\n");
	printf("Ataque = (a)\nMovimento = (m)\nEspecial = (s)\nMovimento especial = (g): ");
	 scanf(" %c", &x);
        	if(x == 'a'|| x == 'A')
			{
        		ataque();
				checks();					
			}
			else if( x == 'm'|| x == 'M')
			{
				movimento1();
			}
			else if( x == 'g'|| x == 'G')
			{
				movespno();
			}
			else if(x == 's' || x == 'S'){
				atkespn();
				checks();
			}
			
			else
			{
				printf("seleção invalida\n");
				system("pause");
				atkmovn();
			}
}
void atkmovs()
{
	char x;
	printf("Vez do sul\n");
	printf("Ataque = (a)\nMovimento = (m)\nEspecial = (s)\nMovimento especial = (g): ");
	 scanf(" %c", &x);
        	if(x == 'a'|| x == 'A')
			{
        		ataque();
				checkn();					
			}
			else if( x == 'm'|| x == 'M')
			{
				movimento2();
			}
			else if( x == 'g'|| x == 'G')
			{
				movespsul();
			}
			else if(x == 's' || x == 'S'){
				atkesps();
				checkn();
			}
			else
			{
				printf("seleção invalida\n");
				system("pause");
				atkmovs();
			}
}


void jogar(){
	
	int vitn, vits;
	
	system("cls");
        random();
        system("pause");
        system("cls");
        imprimirmapa();
        marcarsoldados();
        if(testes == 3){
			printf("O VENCEDOR É O NORTE!!!");
		}
		else if(testen == 3){
			printf("O VENCEDOR É O SUL!!!");
		}
        while(testen != 3 || testes != 3){
        	atkmovn();
			atkmovs();
		}
		
        
	
}

