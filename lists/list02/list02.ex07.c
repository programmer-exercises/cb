#include <stdio.h>

int main(){
  float peso, altura, imc;
  scanf("%f %f", &peso, &altura);
  imc = peso/(altura*altura);
  if(imc < 20){
    printf("ABAIXO\n");
  }
  if(imc >= 20 && imc < 25){
    printf("NORMAL\n");
  }
  if(imc >= 25 && imc < 30){
    printf("SOBREPESO\n");
  }
  if(imc >= 30 && imc < 40){
    printf("OBESO\n");
  }
  if(imc >=40){
    printf("MORBIDO\n");
  }
  return 0;
}
