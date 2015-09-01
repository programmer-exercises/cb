// Paulo Henrique Tada - 11/0135431
#include <stdio.h>
#include <math.h>

int main(){
  int number = 0;
  float quadrado = 0.0;
  float cubo = 0.0;
  float raizq = 0.0;
  float raizc = 0.0;

  scanf("%d",&number);

  quadrado =  number*number;
  cubo = number*number*number;
  raizq = sqrt(number);
  raizc = cbrt(number);

  printf("%.1f %.1f %.1f %.1f\n", quadrado, cubo, raizq, raizc);
  return 0;
}
