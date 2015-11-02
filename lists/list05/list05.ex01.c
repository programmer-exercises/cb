/**
Univeridade de Brasília
Computação Básica
Turma AA
Paulo Henrique Tada Ferreira Santos   11/0135431  
*/
#include<stdio.h>
#include<stdlib.h>

#define EH_TRI  1
#define NO_TRI  0
#define EQUI    1
#define ISO     2
#define ESC     3

int EhTriangulo(int a, int b, int c){
  int result;
  if(a>(b+c) || b>(a+c) || c>(a+b)){
    result = NO_TRI;
  } else {
    result = EH_TRI;
  }
  return result;
}

int TipoTriangulo(int a, int b, int c){
  int result;
  int ehTriangulo = EhTriangulo(a,b,c);
  if(ehTriangulo == NO_TRI){
    result = NO_TRI;
  }else if(a==b && b==c){
    result = EQUI;
  }else if((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b)){
    result = ISO;
  }else{
    result = ESC;
  }
  return result;
}

int main(){
  int i,a,b,c,result;
  for(i=0;i<5;i++){
    scanf("%d %d %d",&a,&b,&c);
    result = TipoTriangulo(a,b,c);
    switch(result){
      case NO_TRI:
        printf("Nao e Triangulo\n");
        break;
      case EQUI:
        printf("Triangulo Equilatero\n");
        break;
      case ISO:
        printf("Triangulo Isosceles\n");
        break;
      case ESC:
        printf("Triangulo Escaleno\n");
        break;
    }
  }
  return 0;
}
