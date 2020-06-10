#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>




void menu(){


 printf("Bem-vindo(a) às Batalhas da Laponia \n");
 printf("Aperte 1 para começar um novo jogo \n");
 printf("Aperte 2 para ver como jogar \n");	
 printf("Aperte 3 para sair \n");
 printf("\n");
 printf("Digite sua escolha:  ");
 
}  


void comojogar(){

system("cls");


printf("INTRODUCAO \n");
printf("\n");

printf("A Lapônia era uma região de 12 km2 situada na costa sul da África do Sul, a qual era cercada por uma grande cordilheira, banhada pelo grande lago “Ichibi Elikhulu”. \n");
printf("Esta região foi disputada por facções guerreiras do norte e do sul, separadas apenas pelo grande lago. Era impossível transpor o lago, portanto as facções criaram técnicas e armamentos para travar disputas entre si de um lado ao outro do lago. \n");
printf("Não há um consenso histórico sobre qual lado saiu vitorioso, já que a região foi inundada pouco tempo depois do fim do conflito, dizimando todos que lá viviam \n");
printf("Apenas uma guerreira conseguiu fugir da Lapônia, chamada Iqhawe Elihlakaniphile, que criou esse jogo para manter vivo o histórico de seu povo \n");
printf("\n");
printf("aperte enter para continuar \n");
}

void regras(){

system("cls");
 
printf("REGRAS \n");
printf("\n");
printf("1 - O jogo consiste em um tabuleiro de tamanho 12x12, com as casas da borda representando a cordilheira e separado exatamente no meio por uma faixa de 20 casas, representando o grande lago \n ");
printf("2 - Os guerreiros 1 e 2 estão presentes em ambos os lados do rio, enquanto os guerreiros @ e # são exclusivos do norte e do sul, respectivamente \n"); 
printf("3 - Em cada jogada, o jogador deve decidir qual guerreiro usar e escolher se deve se movimentar ou atacar \n");
printf("4 - Os guerreiros 1 e 2 movem-se uma casa para a esquerda, para a direita, para frente ou para trás \n");
printf("5 - Os guerreiros @ e # podem se mover qualquer numero de casas nas diagonais e nos pontos cardiais, respectivamente  \n");
printf("6 - É proibido movimentar-se para uma casa do rio ou da cordilheira \n");
printf("7 - O guerreiro 1 pode apenas atacar frontalmente, enquanto o 2 precisa escolher qual diagonal (esquerda ou direita) atacar \n");
printf("8 - O guerreiro # pode escolher uma area 3x3 para atacar, dizimando qualquer peça no local \n");
printf("9 - O guerreiro @ pode escolher um inimigo em qualquer lugar do mapa para matar \n");	
printf("10 - O jogador que exterminar todas as peças inimigas vence \n");
printf("\n");
printf("aperte enter para voltar para o menu");
} 
