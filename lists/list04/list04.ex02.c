/**
  Universidade de brasília
  Computação Básica
  Paulo Henrique Tada 11/0135431
  Luiz Larangeira   Turma AA
*/
#include<stdio.h>
#define MAX 299

int main(){
  int inteiros[MAX], i, stop;
  for(i=MAX;i>=0;i--){
    scanf("%d", &inteiros[i]);
    if(inteiros[i]<0){
      stop = i;
      break;
    }
  }
  for(i=0;i<stop;i++)
    printf("%d ",inteiros[i]);
  printf("%d\n",inteiros[stop]);
  
  return 0;
}
