#include <stdio.h>

int main(){
  int ano_atual = 0;
  int ano_nascimento = 0;

  scanf("%d %d", &ano_nascimento, &ano_atual);
  printf("%d %d\n", ano_atual-ano_nascimento, 2017-ano_nascimento);

  return 0;
}
