/**
  Universidade de brasília
  Computação Básica
  Paulo Henrique Tada 11/0135431
  Luiz Larangeira   Turma AA
*/
#include<stdio.h>
#define MAX 199

int main(){
  int inteiros[MAX], i;
  for(i=MAX;i>=0;i--)
    scanf("%d", &inteiros[i]);
  for(i=0;i<MAX;i++)
    printf("%d ",inteiros[i]);
  printf("%d\n",inteiros[MAX]);
  
  return 0;
}
