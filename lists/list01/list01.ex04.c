// Paulo Henrique Tada - 11/0135431
#include <stdio.h>

int main(){
  double salary = 0.0;
  double plus = 0.0;
  double percent = 0.0;

  scanf("%lf %lf", &salary, &percent);

  plus = (salary*percent)/100;
  printf("%.2lf %.2lf\n", plus, salary+plus);
  return 0;
}
