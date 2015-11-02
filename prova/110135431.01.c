/*
Universidade de Brasília
Prova prática

Nome: Paulo Henrique Tada
Matrícula: 11/0135431
Prof.: Luiz Laranjeira
Turma: AA
*/

#include<stdio.h>
#include<stdlib.h>

int SOMA = 0;

int serie(int n){
  int result = 0;
  if(n==1){
    result = 1;
  }else{
    result = serie(n-1)+2*n+1;
  }
  SOMA += result;
  return result;
}

int main(){
  int n = 0;
  int tn = 0;
  int soma = 0;
  scanf("%d",&n);
  tn = serie(n);
  printf("%d  %d\n", tn,SOMA);
  return 0;
}
