#include <stdio.h>

int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  float result = (a+b+c)/3.0;
  printf("%.1f\n", result);
  return 0;
}
