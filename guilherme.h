#include <stdio.h>
#include <stdlib.h>
 
  void imprimirmapa(){

	   int lin, col;
	 	 for(lin = 0; lin < 13; lin++)	  {
		  for(col = 0; col < 13; col++)		  {
             printf("%c", mapa[lin][col]);			  			  
		  }
		  printf("\n");
	  }		   
   }
 void marcar1(int lin, int col) {
 	if(lin < 2 || col < 2 || lin > 11 || col > 11)
	 {
		 printf("Nao eh possivel marcar os soldados nos morros\n\n");		 	 
	 }
	if(lin == 6 || lin == 7)
		{
		printf("Nao eh possivel marcar os soldados no rio\n\n");
	} 
	 else	 {
		 mapa [lin][col] = '1';
	 }	  
 }
 
 void marcar2(int lin, int col) {
 	if(lin < 2 || col < 2 || lin > 11 || col > 11)
	 {
		 printf("Nao eh possivel marcar os soldados nos morros\n\n");		 	 
	 }
	if(lin == 6 || lin == 7)
		{
		printf("Nao eh possivel marcar os soldados no rio\n\n");
	} 
	 else	 {
		 mapa [lin][col] = '2';
	 }	  
 }
 
 void heroinorte(int lin, int col) {
 	if(lin < 2 || col < 2 || lin > 11 || col > 11)
	 {
		 printf("Nao eh possivel marcar os soldados nos morros\n\n");		 	 
	 }
	if(lin == 6 || lin == 7)
		{
		printf("Nao eh possivel marcar os soldados no rio\n\n");
	} 
	 else	 {
		 mapa [lin][col] = '#';
	 }	  
 }
 
 void heroisul(int lin, int col) {
 	if(lin < 2 || col < 2 || lin > 11 || col > 11)
	 {
		 printf("Nao eh possivel marcar os soldados nos morros\n\n");		 	 
	 }
	if(lin == 6 || lin == 7)
		{
		printf("Nao eh possivel marcar os soldados no rio\n\n");
	} 
	 else	 {
		 mapa [lin][col] = '@';
	 }	  
 }
      void marcarsoldados()   {
	 int i, j, cont;
	 imprimirmapa();
	   for(cont = 1; cont <= 7; cont++)	   {
	 printf("Digite a linha e a coluna que deseja posicionar o soldado 1 : ");
	 scanf("%d %d", &i, &j);
	     system("cls");	   
		marcar1(i, j); 
    imprimirmapa();
    printf("Digite a linha e a coluna que deseja posicionar o soldado 2 : ");
     scanf("%d %d", &i, &j);
	     system("cls");
        marcar2(i, j);
    imprimirmapa();
    } 
      printf("Digite a localização do soldado especial do norte: ");
        scanf("%d %d", &i, &j);
           system("cls");
          heroinorte(i,j);
	imprimirmapa();	   
	   printf("Digite a localização do soldado especial do sul: ");
        scanf("%d %d", &i, &j);
           system("cls");
          heroisul(i,j);
	imprimirmapa();
    } 
      }
