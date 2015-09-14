#include<stdio.h>

int main(){
  int n,num,maior=0,menor=1000000,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&num);
    if(num<menor) menor=num;
    if(num>maior) maior=num;
  }
  printf("Menor: %d\n",menor);
  printf("Maior: %d\n",maior);
  return 0;
}
