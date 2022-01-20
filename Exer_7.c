#include<stdio.h>
#include<math.h>
#define n 100

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script: Escreva uma função que receba um vetor de valores reais e seu tamanho e leia valores do teclado
*             para preencher todo o vetor apenas com valores positivos. Observe que valores negativos devem
*             ser ignorados e a leitura deve ser encerrada assim que a última posição do vetor for preenchida.
*          
*     Language: C
*
**************************************************************************************************************/

//Função
float funcao_Real(int tamanho, float uv[]){
//Definindo as Variáveis de Entrada
int h;
int menor = uv[0];

  for(h = 0; h < tamanho; h++){
    uv[h] = 0;
    printf("Digite um Número: ");
      scanf("%f", &uv[h]);
  }
  for(h = 0; h < tamanho; h++){
    if(uv[h] < 0){
      menor = uv[h];
      continue;
    }
    printf("\nValores: %.2f\n", uv[h]);
  }
  return 0;
}
//
int main(){
//
float uvw[n] = {};
int tamanho = 0;
//
  printf("Digite o Tamanho do Vetor: ");
    scanf("%d", &tamanho);
//
    funcao_Real(tamanho,uvw);

return 0;

}