#include<stdio.h>

double celsius(int tempf){
  double tempc = 0;
  tempc = (5*(tempf-32))/9.0;
  return tempc;
}

int main(){
  int t1, t2,i;
  scanf("%d %d", &t1,&t2);
  for(i=t1;i<=t2;i++){
    printf("%d F : %.1lf C\n",i,celsius(i));
  }
  return 0;
}
