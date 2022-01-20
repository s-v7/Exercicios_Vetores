#include <stdio.h>
#include<math.h>
#define n 100

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script:  Escreva uma função que receba um vetor de valores reais e seu tamanho e retorne quantos destes
*              valores são negativos.
*     Language: C
*
**************************************************************************************************************/

//Definindo Função
float funcao_vetor(int tamanho, float V[]){
//
int j; 
int contador = 0;
//
  for(j = 0; j < tamanho; j++){
    V[j] = 0;
  //Entrada de Dados
    printf("Digite o Valor na Posição[%d]: ",j);
      scanf("%f", &V[j]);
  }
  //2 Laço
  for(j = 0; j < tamanho; j++){
    if(V[j] < 0){//
        contador += 1; 
    }
  }
  //
  printf("\nQuantidade de  Valores Negativos => %d\n\f ",contador);
return 0;
}
//
int main(){
//
float vetor[n] = {}; // float vetor[] = {0.1, 0.3, 0.5, 0.7, 0.9}
int t = 0;
//
  printf("Digite o tamnho: ");
    scanf("%d", &t);
//
    funcao_vetor(t,vetor);
//
  return 0;
}

















