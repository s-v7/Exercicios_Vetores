#include<stdio.h>
#include<math.h>

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script: Desenvolva um programa que leia um vetor de números reais, um escalar e imprima o resultado
*             da multiplicação do vetor pelo escalar
*          
*     Language: C
*
**************************************************************************************************************/

//
int main(){
// 
int  i = 0;
int escalar = 0;
int tamanho = 0;
//  
  printf("Digite o tamanho do Vetor: ");
    scanf("%d", &tamanho);
    printf("Digite o valor do Escalar: ");
      scanf("%d", &escalar);
//
  float vetor[tamanho];
//
  for(i = 0; i < tamanho; i++){
    vetor[i] = 0;    
    printf("Digite um Valor: ");
        scanf("%f", &vetor[i]);

        vetor[i] *= escalar;
  }
  //
  for(i = 0; i < tamanho; i++){

    printf("Posição: (%d) Valor Multiplicado = %.2f \n ",i,vetor[i]);

  }
return 0;
}




