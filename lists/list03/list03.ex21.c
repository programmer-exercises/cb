#include<stdio.h>
#include<stdlib.h>

int main(){
  int num,maior=0,menor=999999,total=0;
  int maior_count=0,menor_count=0,count=1;
  while(scanf("%d",&num)!=EOF){
    if(num<0){
      int next;
      scanf("%d",&next);
      num=abs(num);
      num+=next;
    }
    if(num<menor && num>0){
      menor = num;
      menor_count = count;
    }
    if(num>maior){
      maior = num;
      maior_count = count;
    }
    total += num;
    count++;
  }
  printf("Melhor volta: %d - %d seg\n",menor_count,menor);
  printf("Pior volta: %d - %d seg\n",maior_count,maior);
  printf("Tempo total: %d seg\n", total);
  return 0;
}
