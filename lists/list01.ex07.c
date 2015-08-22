#include <stdio.h>

#define PI 3.1416

int main(){
  double altura = 0.0;
  double raio = 0.0;

  scanf("%lf %lf", &altura, &raio);
  printf("%.1lf\n",PI*raio*raio*altura);
  return 0; 
}
