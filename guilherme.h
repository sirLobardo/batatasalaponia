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
	 mapa [lin][col] = '1'; 
 }
 int marcarsoldados() {
	 int i, j;
	 imprimirmapa();
	 printf("Digite a linha e a coluna que deseja posicionar o soldado:");
	 scanf("%d %d", &i, &j);
	 marcar1(i, j);
	 system("cls");
	 imprimirmapa();
	 
