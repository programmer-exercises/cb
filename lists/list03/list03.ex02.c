#include<stdio.h>

int main(){
  int i, horas, total = 0;
  for(i = 0; i<30 ; i++){
    scanf("%d",&horas);
    total+=horas;
  }
  printf("%d\n",total);
  return 0;
}
