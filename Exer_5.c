#include<stdio.h>
#include<math.h>
#define n 100

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script: Implemente uma função que, dados um vetor de valores reais e seu tamanho, retorne a média dos
*              valores armazenados.
*     Language: C
*
**************************************************************************************************************/

//
float funcao_Vetor_Real(int tamanho, float R[]){
//
int z = 0,contador = 0;
float soma = 0.0, media = 0.0;
//
  for(z = 0; z < tamanho; z++){
    R[z] = 0;
    printf("Enter com um valor: ");
      scanf("%f", &R[z]);
//
      soma += R[z];
      contador += 1;
      media = ((soma)/contador);
  }
//  
  printf("Média: %.2f\nSoma: %.2f\nContador: %d\n ", media,soma,contador);
return 0;
}
//
int main(){
//
float R[n] = {};
int tamanho = 0;
//
  printf("Digite o tamanho: ");
    scanf("%d", &tamanho);
//
  funcao_Vetor_Real(tamanho,R);

return 0;

}