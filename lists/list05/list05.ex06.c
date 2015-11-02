/**
Univeridade de Brasília
Computação Básica
Turma AA
Paulo Henrique Tada Ferreira Santos   11/0135431  
*/
#include<stdio.h>
#include<stdlib.h>

#define BI    1
#define NO_BI 2

int EhBisexto(int ano){
  int result;
  if((ano%4==0 && ano%100!=0) || (ano%400 == 0)){
    result = BI;
  } else{
    result = NO_BI;
  }
  return result;
}

int main(){
    int iIndice, iAnoInicial, iAnoFinal, iNBi = 0;
    scanf("%d %d", &iAnoInicial, &iAnoFinal);
    for (iIndice = iAnoInicial; iIndice<=iAnoFinal ; iIndice++){
        if (EhBisexto(iIndice) == BI)
        {
            printf("%d\n", iIndice);
            iNBi++;
        }
    }
    printf("%d\n", iNBi);
    return 0;
}
