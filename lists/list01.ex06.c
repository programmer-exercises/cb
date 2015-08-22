#include <stdio.h>

int main(){
  double imposto = 0.0;
  double deposito = 0.0;
  double juros = 0.0;

  double result = 0.0;
  double rendimento = 0.0;
  scanf("%lf %lf %lf",&deposito, &juros, &imposto);

  result = deposito*juros/100;
  rendimento = result*imposto/100;
  printf("%.2lf %.2lf\n", rendimento, deposito+result-rendimento);

  return 0;
}
