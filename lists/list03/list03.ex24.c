#include<stdio.h>
#include<stdlib.h>
int ninja(int num){
  int result = 0;
  if(num!=2 && num!=7 && num!=3){
    result = 3;
  }else{
    if(num==2) result=2;
    if(num==7) result=3;
    if(num==3) result=4;
  }
  return result*ninja(num-1);
}

int main(){
  long int num = 0;
  scanf("%ld",&num);
  printf("%ld\n", ninja());
  return 0;
}
