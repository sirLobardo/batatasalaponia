int testen = 0,  testes = 0;

void atkmovn()
{
	char x;
	printf("Vez do norte\n");
	printf("Ataque = (a)\nMovimento = (m)\nEspecial = (s)\nMovimento especial = (g): ");
	 scanf(" %c", &x);
        	if(x == 'a'|| x == 'A')
			{
        		ataque();
				testen++;					
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
				testen++;
			}
			
			else
			{
				printf("seleção invalida");
				system("pause");
				atkmovn();
			}
}
void atkmovs()
{
	char x;
	printf("Vez do sul\n");
	printf("Ataque = (a)\nMovimento = (m)\nEspecial = (s): ");
	 scanf(" %c", &x);
        	if(x == 'a'|| x == 'A')
			{
        		ataque();
				testes++;					
			}
			else if( x == 'm'|| x == 'M')
			{
				movimento2();
			}
			else if(x == 's' || x == 'S'){
				atkesps();
				testes++;
			}
			else
			{
				printf("seleção invalida");
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
        if(testen != 3 || testes != 3){
        for(;;){
        	atkmovn();
			break;	
		}
		for(;;){
			atkmovs();
			break;	
		}
			
	}
     if(testes == 3){
			printf("O VENCEDOR É O NORTE!!!");
		}
		else if(testen == 3){
			printf("O VENCEDOR É O SUL!!!");
		}   
	
}

