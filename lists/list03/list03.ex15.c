/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  int com,i;
  double l,c,total=0;
  scanf("%d",&com);
  for(i=0;i<com;i++){
    scanf("%lf %lf",&l,&c);
    total += (l*c);
  }
  printf("%.1lf\n", total);
  return 0;
}
