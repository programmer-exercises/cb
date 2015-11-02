#include<stdio.h>
#include<stdlib.h>

int main(){
  int maior=0, menor=999999, num,i;
  for(i=0 ; i<20 ; i++){
    scanf("%d", &num);
    if(num>maior) maior = num;
    if(num<menor) menor = num;
  }
  printf("Menor: %d\nMaior: %d\n",menor,maior);
  return 0;
}
