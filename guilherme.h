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
 	if(lin < 2 || col < 2 || lin > 11 || col > 11){
		 printf("Nao eh possivel marcar os soldados nos morros\n\n");		 	 
	 }
	if(lin == 6 || lin == 7)	{
		printf("Nao eh possivel marcar os soldados no rio\n\n");
	} 
	 else	 {
		 mapa [lin][col] = '1';
	 }	  
 }
      void marcarsoldados()   {
	 int i, j, cont;
	 imprimirmapa();
	   for(cont = 1; cont <= 8; cont++)	   {
	 printf("Digite a linha e a coluna que deseja posicionar o soldado: ");
	 scanf("%d %d", &i, &j);
	     system("cls");	   
		marcar1(i, j); 
    imprimirmapa();
    } 
      }
