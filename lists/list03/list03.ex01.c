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
