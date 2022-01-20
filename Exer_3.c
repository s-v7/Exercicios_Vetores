#include<stdio.h>
#include<math.h>
#define n 100

/*************************************************************************************************************
*     Author: Silas Vasconcelos ->{S-v7};
*     Script:  Elabore uma função que recebe por parâmetro um vetor de inteiros e o seu tamanho e retorna a
               soma de seus elementos.  
*     Language: C
*
**************************************************************************************************************/

//Função 
int funcao_Int_1(int tamanho, int W[]){
//Definindo as variáveis de Entrada
int n = 0;
int soma = 0;
//Laço para Entrada de Dados
  for(n = 0; n < tamanho; n++){
    W[n] = 0;
    printf("Digite o Valor: ");
      scanf("%d", &W[n]);
//Processamento   
      soma += W[n];
}
  //Saída
  printf("Soma => %d\n ", soma);  
return 0;
}
//Função Principal
int main(){
//
int S[n] = {};
int t = 0;
//
  printf("Digite o tamanho do Espaço Vetorial: ");
    scanf("%d", &t);
//
    funcao_Int_1(t,S);

return 0;
}