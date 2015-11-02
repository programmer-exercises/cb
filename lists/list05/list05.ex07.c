/**
Univeridade de Brasília
Computação Básica
Turma AA
Paulo Henrique Tada Ferreira Santos   11/0135431  
*/
#include<stdio.h>
#include<stdlib.h>

int ComparaNum(int a, int b, char type){
  int result = 0;
  switch(type){
    case 'A':
      if(a==b) result = 1;
      break;
    case 'B':
      if(abs(a)==abs(b)) result = 1;
      break;
    case 'C':
      if((a>0 && b<0) || (a<0 && b>0)){
        if(abs(a)==abs(b)) result = 1;
      }
      break;
  }
  return result;
}

int main()
{
    int Num1, Num2, Resultado;
    char Opcao;

    scanf ("%d %d %c", &Num1, &Num2, &Opcao);
    Resultado = ComparaNum(Num1,Num2,Opcao);

    printf("%d", Resultado);

    return 0;
}
