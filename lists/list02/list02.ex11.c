#include<stdio.h>

double funcao_x(double x){
  if(x<=1){
    return 1;
  }
  if(x>1 && x<=2){
    return 2;
  }
  if(x>2 && x<=3){
    return (x*x);
  }
  if(x>3){
    return (x*x*x);
  }
}

int main(){
  double x;
  scanf("%lf",&x);
  printf("%.1lf\n",funcao_x(x));
  return 0;
}
