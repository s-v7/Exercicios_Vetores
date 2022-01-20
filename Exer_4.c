#include<stdio.h>
#include<math.h>
#define n 100
/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script:   Implemente uma função que receba um vetor de inteiros, seu tamanho e um valor x e retorne o
*               índice da primeira posição do vetor que contém o valor x. Se o valor x não estiver no vetor, a
*               função deve retornar o valor -1
*     Language: C
*
**************************************************************************************************************/
//
int funcao_Int_2(int tamanho, int ifsc[], int x){
//
int t = 0, objeto = 0;
//
  for(t = 0; t < tamanho; t++){
    ifsc[t] = 0;
    printf("Digite o Valor no Índice %d: ",t);
      scanf("%d", &ifsc[t]);
}
//  
  for(t = 0; t < tamanho; t++){
//Condicional 
    if( ifsc[t] == x ){
      objeto = ifsc[t]; 
      printf("Índice da Primeira posição-> %d\n ",ifsc[0]);
      break; 
    }else {
      printf("-1\n");
    }
}
return 0;
}
//Função Principal
int main(){
//
  int ifsc[n] = {};
  int tamanho = 0, y = 0;
//
  printf("Digite o tamanho do Espaço Vetorial: ");
    scanf("%d", &tamanho);
    printf("Digite o Valor a Pesquisar: ");
      scanf("%d", &y);
//
    funcao_Int_2(tamanho,ifsc,y);

  return 0;
}