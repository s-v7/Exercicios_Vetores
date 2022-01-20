#include<stdio.h>
#include<math.h>
#define n 100

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script: Faça uma função que inverta a ordem dos elementos de um vetor (exemplo: o vetor {9,2,5,6} ao
*              final da função deve ser alterado para {6,5,2,9}). Faça um programa para testar a função com 3
*              vetores de tamanhos 5, 9 e 14. Use impressões para mostrar a configuração de um vetor a cada
*              passo do algoritmo.       
*     Language: C
*
**************************************************************************************************************/
//
int funcao_Inversa(int tamanho, int vetor[]){
//
int i = 0;
//
for(i = 0; i < tamanho; i++){
  vetor[i] = 0;
  printf("Digite um Número na Posição %d: ", i);
  scanf("%d", &vetor[i]);
}
//
for(i = tamanho - 1; i >= 0; --i){
  printf("Valor: [%d]->Posição %d\n ", vetor[i],i);
}
  return 0;
}
//
int main(){
//
int vetor[n] = {};
int tamanho = 0;
//
  printf("Digite o tamanho do Vetor: ");
    scanf("%d", &tamanho);
//
    funcao_Inversa(tamanho,vetor);
//
return 0;
}