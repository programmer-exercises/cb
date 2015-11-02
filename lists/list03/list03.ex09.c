/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  int q;
  double pr,subtotal,total=0;


  while(scanf("%d %lf",&q,&pr)){
    if(q<=0) break;
    while(pr<0){
      scanf("%lf",&pr);
    }
    subtotal = q*pr;
    total+=subtotal;
  }
  printf("%.2lf\n",total);
  return 0;
}
