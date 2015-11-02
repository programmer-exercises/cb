#include<stdio.h>
#include<stdlib.h>

int main(){
  int code=0;
  double sale=0;
  double maior=0,menor=99999;
  int less_code,large_code;
  int i;
  for(i=0;i<10;i++){
    scanf("%d %lf",&code,&sale);
    if(sale<=5000) sale*=0.015;
    if(sale>5000 && sale<15000) sale*=0.035;
    if(sale>15000) sale*=0.047;

    if(sale>maior){
      maior=sale;
      large_code=code;
    }
    if(sale<menor){
      menor=sale;
      less_code=code;
    }
  }

  printf("%d %.2lf %d %.2lf\n",large_code,maior,less_code,menor);
  return 0;
}
