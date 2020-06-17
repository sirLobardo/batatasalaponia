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
			printf("%c", mapa[lin][col]);
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

void random() {
      int tamanho;
      char nome1[100], nome2[100];
      printf("Digite o nome do player1: ");
      fgets(nome1, 100, stdin);
      tamanho = strlen(nome1); 
  
      printf("Digite o nome do player2: ");
      fgets(nome2, 100, stdin);
      tamanho = strlen(nome2);
      srand(time(NULL));
  
  {
   if(rand() % 11 >= 6)
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
	int i, j, cont;
	 imprimirmapa();
	   for(cont = 1; cont <= 7; cont++)	  
	    {
	   	for(;;)		   
		   {
	   	 printf("Digite a linha e a coluna que deseja posicionar o soldado 1 : ");
	       scanf("%d %d", &i, &j);
        	 if(i > 1 && j > 1 && i < 6 && j < 12)	 
		  {	
	          system("cls");	   
		       marcar1(i, j); 
              imprimirmapa();
               break;
	      } 
	      system("cls");
	      imprimirmapa();
	      printf("coordenadas invalidas\n");
		   }
		  for(;;)		 
		  { 
          printf("Digite a linha e a coluna que deseja posicionar o soldado 2 : ");
          scanf("%d %d", &i, &j);
          if(j > 1 && i > 7 && j < 12 && i < 12)    
		  {
	       system("cls");
           marcar2(i, j);
           imprimirmapa();
           break;
		  }
		  system("cls");
	      imprimirmapa();
	      printf("coordenadas invalidas\n");
          } 
	      }
         for(;;)		  {
	      	 printf("Digite a localização do soldado especial do norte: ");
	         scanf("%d %d", &i, &j);
            	 if(i > 1 && j > 1 && i < 6 && j < 12)	 {	
	              system("cls");	   
		          heroinorte(i, j); 
                  imprimirmapa();
                  break;
	      } 
	      system("cls");
	      imprimirmapa();
	      printf("coordenadas invalidas\n");
		   }	   
	   for(;;)		 { 
          printf("Digite a localização do soldado especial do sul: ");
          scanf("%d %d", &i, &j);
          if(j > 1 && i > 7 && j < 12 && i < 12)    {
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
