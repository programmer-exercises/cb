/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include <stdio.h>

int main(){
  int n,i,fat=1;
  scanf("%d",&n);

  if(n<0){
    printf("nao existe");
    return 0;
  }
  
  if(n==0){
    printf("1\n");
    return 0;
  }

  for(i=1; i<=n ; i++){
    fat *= i;
  }

  printf("%d\n", fat);

  return 0;
}
