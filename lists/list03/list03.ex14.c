#include<stdio.h>

int main(){
  int at1,at2,anos=0;
  scanf("%d %d",&at2,&at1);
  while(at1<at2){
    at1+=3;
    at2+=2;
    anos++;
  }
  printf("%d\n",anos);
  return 0;
}
