void atkmovn()
{
	char x;
	printf("(m)movimento (a)ataque: ");
	 scanf(" %c", &x);
        	if(x == 'a'|| x == 'A')
			{
        		ataque();					
			}
			else if( x == 'm'|| x == 'M')
			{
				movimento1();
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
	printf("(m)movimento (a)ataque: ");
	 scanf(" %c", &x);
        	if(x == 'a'|| x == 'A')
			{
        		ataque();					
			}
			else if( x == 'm'|| x == 'M')
			{
				movimento2();
			}
			else
			{
				printf("seleção invalida");
				system("pause");
				atkmovs();
			}
}

void jogar(){
	
	
	system("cls");
        random();
        system("pause");
        system("cls");
        imprimirmapa();
        marcarsoldados();
    	atkmovn();   
        system("cls");
        imprimirmapa();
        //system("cls");
        //imprimirmapa();
	
}


