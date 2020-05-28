#include <stdio.h>
#include <string.h>
void menu(){

 printf("Bem-vindo(a) as Batalhas da Laponia \n");
 printf("Aperte 1 para comecar um novo jogo \n");
 printf("Aperte 2 para ver como jogar \n");	
 printf("Aperte 3 para sair \n");
	
}  


void comojogar(){
char intro[500];
strcpy(intro, "A Laponia era uma regiao de 12 km2 situada na costa sul da Africa do Sul, a qual era cercada por uma grande cordilheira.");
printf("INTRODUCAO \n");
printf("\n");

printf("%s", intro);

printf("REGRAS");
printf("\n");
printf("1 - O jogo consiste em um tabuleiro de tamanho 12x12, com as casas da borda representando a cordilheira e separado exatamente no meio por uma faixa de 20 casas, representando o grande lago \n ");
printf("2 - Os guerreiros 1 e 2 estao presentes em ambos os lados do rio, enquanto os guerreiros @ e # sao exclusivos do norte e do sul, respectivamente \n"); 
printf("3 - Em cada jogada, o jogador deve decidir qual guerreiro usar e escolher se deve se movimentar ou atacar \n");
printf("4 - Os guerreiros 1 e 2 movem-se uma casa para a esquerda, para a direita, para frente ou para tras \n");
printf("5 - Os guerreiros @ e # podem se mover qualquer numero de casas nas diagonais e nos pontos cardiais, respectivamente  \n");
printf("6 - Eh proibido movimentar-se para uma casa do rio ou da cordilheira \n");
printf("7 - O guerreiro 1 pode apenas atacar frontalmente, enquanto o 2 precisa escolher qual diagonal - esquerda ou direita - para atacar \n");
printf("8 - O guerreiro # pode escolher uma area 3x3 para atacar, dizimando qualquer peca no local \n");
printf("9 - O guerreiro @ pode escolher um inimigo em qualquer lugar do mapa para matar \n");	
printf("10 - O jogador que exterminar todas as pecas inimigas vence \n");
} 

