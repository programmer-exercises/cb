// Turma AA
// Paulo Tada - 11/0135431
#include <stdio.h>

int main(){
  int aux, v[3];
  scanf("%d %d %d",&v[0],&v[1],&v[2]);
  if(v[0]>v[1]){
    aux = v[0];
    v[0] = v[1];
    v[1] = aux;
  }
  if(v[1]>v[2]){
    aux = v[1];
    v[1] = v[2];
    v[2] = aux;
  }
  if(v[0]>v[1]){
    aux = v[0];
    v[0] = v[1];
    v[1] = aux;
  }
  printf("%d %d %d\n",v[0],v[1],v[2]);
  return 0;
}
