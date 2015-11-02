/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  int num, soma=0, count=0;
  while(scanf("%d",&num)){
    if(num<0) break;
    soma+=num;
    count++;
  }
  printf("%d\n%.1f\n",soma,((float)soma/count));
  return 0;
}
