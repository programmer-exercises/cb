// Turma AA
// Paulo Tada - 11/0135431
#include <stdio.h>

int main(){
  int n1,n2,nf;
  scanf("%d %d",&n1,&n2);
  nf = (n1+n2)/2;
  if(nf < 3){
    printf("REPROVADO\n");
  }else if(nf >= 7){
    printf("APROVADO\n");
  }else{
    printf("EXAME\n");
  }
  return 0;
}
