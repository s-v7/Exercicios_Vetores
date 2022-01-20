#include<stdio.h>
#include<math.h>
#define n 100

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script:  Implemente uma função que receba um vetor de inteiros e seu tamanho e retorne o maior
*               elemento do vetor.
*     Language: C
*
**************************************************************************************************************/
//
int funcao_Int_0(int tamanho, int U[]){
//
int k, indice = 0;
int maior = U[0];
//
  for(k = 0; k < tamanho; k++){
    U[k] = 0;  
    printf("Digite o valor: ");
      scanf("%d", &U[k]);
  }
//
  for(k = 0; k < tamanho; k++){
  
  if(U[k] > maior){
    maior = U[k];
    indice = k; 
  } 
} 
  printf("Maior: %d->Índice: %d", maior,indice);
return 0;
}
//
int main(){
//
int vetor_u[n] = {};
int t = 0;
//
  printf("Digite o Tamanho do Vetor: ");
    scanf("%d", &t);
//
    funcao_Int_0(t,vetor_u);
//
  return 0;
}