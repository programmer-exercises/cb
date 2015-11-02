/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  double d, tj;
  int t,i;
  scanf("%lf %lf %d", &d, &tj, &t);

  tj = (tj/100);

  for(i=0;i<t;i++){
    printf("Rendimento no mes %d: %.2lf\n", i, d*tj);    
    d+= (d*tj);
  }
  printf("Saldo final do investimento: %.2lf\n", d);
  return 0;
}
