/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){

  double s,sn,total=0;
  
  while(scanf("%lf",&s)){
    if(s<0) break;
    if(s<500) sn = s*1.15;
    if(s>=500 && s<=1000) sn = s*1.10;
    if(s>1000) sn = s*1.05;
    printf("%.2lf\n",sn);
    total += sn;
  }
  printf("%.2lf", total);
  return 0;
}
