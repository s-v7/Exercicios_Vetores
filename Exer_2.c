#include<stdio.h>
#include<math.h>
#define n 100

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script:  Faça um programa que preencha um vetor de elementos inteiros com valores lidos do teclado e,
*               ao final, imprima somente valores ímpares armazenados nos índices pares.  
*     Language: C
*
**************************************************************************************************************/

//Função
int funcao_Elementos(int tamanho, int P[]){
//
int w;
//laço 
for(w = 0; w < tamanho; w++){
  P[w] = 0;
  printf("Digite o valor: ");
    scanf("%d", &P[w]);
}
//2° Laço
for(w = 0; w < tamanho; w++){
  if((P[w] % 2) == 1 && (w % 2) == 0){
    printf("Valor: %d ->Índice[%d]\n",P[w],w);
  }
}  
return 0;
}
//Função Principal 
int main(){
//
int vetor_P[n] = {};
int t = 0;
//
  printf("Digite o Tamanho da Matriz: ");
    scanf("%d", &t);
//
    funcao_Elementos(t,vetor_P);
//
return 0;
}
