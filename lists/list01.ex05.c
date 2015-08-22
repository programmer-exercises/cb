#include <stdio.h>

#define GRT 0.05
#define IMP 0.07

int main(){
  double salary = 0.0;
  double imp = 0.0;
  double grt = 0.0;
  scanf("%lf",&salary);

  imp = salary*IMP;
  grt = salary*GRT;

  printf("%.2lf\n",salary-imp+grt);
  return 0;
}
