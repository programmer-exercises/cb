/**
  Universidade de Brasília
  Computação Básica
  Turma AA
  Paulo Henrique Tada Ferreira Santos   11/0135431
*/
#include <stdio.h>

int Procura(int Nums[], int qnt, int val){
  int result = -1;
  int i;
  for(i=0;i<qnt;i++){
    if(Nums[i]==val){
       result = i;
       break;
    }
  }
  return result;
}

int main(){
  int pind, pposicao, Nums[100], N;

  for(pind=0;pind<100;pind++){
    scanf("%d", &Nums[pind]);
  }

  scanf("%d", &N);
  pposicao = Procura(Nums,(sizeof(Nums)/4),N);

  if(pposicao >= 0)
    printf("%d",pposicao);
  else
    printf("VALOR NAO ENCONTRADO");
  return 0;
}
