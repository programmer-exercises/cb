#include<stdio.h>

int main(){
  int com,i;
  double l,c,total=0;
  scanf("%d",&com);
  for(i=0;i<com;i++){
    scanf("%lf %lf",&l,&c);
    total += (l*c);
  }
  printf("%.1lf\n", total);
  return 0;
}
