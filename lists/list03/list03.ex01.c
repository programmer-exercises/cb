/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  double peso, total = 0;
  int i;
  for(i = 0; i<25 ; i++){
    scanf("%lf",&peso);
    total += peso;
  }
  printf("%.1f\n",total);
  return 0;
}
