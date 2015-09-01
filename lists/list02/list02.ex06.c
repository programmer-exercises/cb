// Turma AA
// Paulo Tada - 11/0135431
#include <stdio.h>

int main(){
  int idade;
  scanf("%d", &idade);
  if(idade<16){
    printf("NAO ELEITOR\n");
  }
  if(idade>=18 && idade < 65){
    printf("OBRIGATORIO\n");
  }
  if((idade>=16 && idade < 18) || (idade >= 65)){
    printf("FACULTATIVO\n");
  }
  return 0;
}
