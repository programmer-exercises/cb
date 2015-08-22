#include <stdio.h>

int main(){
  double salary = 0.0;
  double plus = 0.0;

  scanf("%lf",&salary);

  plus = salary*0.25;
  printf("%.2lf\n",plus+salary);
}
