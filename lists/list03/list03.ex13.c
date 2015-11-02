/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  int num,i;
  scanf("%d",&num);
  for(i=1;i<=10;i++){
    printf("%dx%d=%d\n",num,i,num*i);
  }
  return 0;
}
