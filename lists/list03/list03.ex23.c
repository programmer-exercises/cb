#include<stdio.h>
#include<stdlib.h>

int main(){
  double compra,venda;
  double tcompra=0,tvenda=0;
  double percent;
  int tlucro=0,tperda=0;
  while(scanf("%lf %lf",&compra,&venda)!=EOF){
    percent = venda/compra;
    if(percent>0) tlucro++;
    if(percent<0) tperda++;
    tcompra+=compra;
    tvenda+=venda;
  }
  printf("%.2lf %d %d\n",(tvenda/tcompra),tlucro,tperda);
  return 0;
}
