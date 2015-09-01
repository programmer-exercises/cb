// Turma AA
// Paulo Tada - 11/0135431
#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  if(n%3==0 && n%7==0){
    printf("MULTIPLO\n");
  } else {
    printf("NAO E MULTIPLO\n");
  }
  return 0;
}
