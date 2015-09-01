#include <stdio.h>

int main(){
  double sm;
  scanf("%lf",&sm);
  if(sm <=500){
    printf("%.2f\n", sm*0.0);
  }
  if(sm > 500 && sm <= 1000){
    printf("%.2f\n", sm*0.3);
  }
  if(sm > 1000 && sm <= 3000){
    printf("%.2f\n", sm*0.4);
  }
  if(sm > 3000){
    printf("%.2f\n", sm*0.5);
  }
  return 0;
}
