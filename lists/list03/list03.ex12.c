/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

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
