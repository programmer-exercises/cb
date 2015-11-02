/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>

int main(){
  int id,op,qp=0,ti=0;
  int t1=0,t2=0,t3=0,t4=0,t5=0;
  while(scanf("%d %d",&id,&op)){
    if(id<0) break;
    while(op<1 || op>5) scanf("%d",&op);
    switch(op){
      case 1: t1++; break;
      case 2: t2++; break;
      case 3: t3++; break;
      case 4: t4++; break;
      case 5: t5++; break;
    }
    ti+=id;
    qp++;
  }
  printf("qtde de participantes: %d\n", qp);
  printf("idade media dos participantes: %.1lf\n", ((double)ti/qp));
  printf("Otimo: %.1lf%\n", ((double)t1/qp)*100);
  printf("Bom: %.1lf%\n", ((double)t2/qp)*100);
  printf("Regular: %.1lf%\n", ((double)t3/qp)*100);
  printf("Ruim: %.1lf%\n", ((double)t4/qp)*100);
  printf("Pessimo: %.1lf%\n", ((double)t5/qp)*100);
  return 0;
}
