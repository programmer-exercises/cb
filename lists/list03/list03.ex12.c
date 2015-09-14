#include<stdio.h>

int main(){
  int num;
  while(scanf("%d",&num)){
    if(num<0) break;
    if((num%2)==0) printf("%d: par\n",num);
    if((num%2)!=0) printf("%d: impar\n",num);
  }
  return 0;
}
