#include<stdio.h>

int main(){
  int num,r;
  scanf("%d",&num);
  if(num<0) printf("-");
  num = abs(num);
  while(num>0){
    r = num%10;
    num = num/10;
    printf("%d",r);
  }
  printf("\n");
  
  return 0;
}
