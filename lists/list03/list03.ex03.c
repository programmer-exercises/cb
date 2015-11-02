/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  int n,i,h = 0;
  scanf("%d", &n);
  for(i=1 ; i<=n ; i++){
    h += i;
  }
  printf("%d\n", h);
  return 0;
}
