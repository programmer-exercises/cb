#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAX 100

void multiplicar(long a[], long b[], long c[], int ord);
void print_matriz(long a[], int ord);

int main(){
  long a[MAX*MAX],c[MAX*MAX];
  int ord,n,i;
  scanf("%d", &ord);

  memset(a, 0, sizeof(a));
  memset(c, 0, sizeof(c));

  for(i=0;i<ord*ord;i++)
    scanf("%ld",&a[i]);

  scanf("%d",&n);
  for(i=1;i<n;i++){
    multiplicar(a,a,c,ord);
  }

  print_matriz(c,ord);
  return 0;
}

void print_matriz(long a[],int ord){
  int i,j;
  for(i=0;i<ord*ord;i++){
    for(j=0;j<ord;j++){
    }
      printf("%ld ",a[i]);
  }
}

void multiplicar(long a[], long b[], long c[], int ord){
  int i,j,k,p,f;
  p=0;
  k=0;
  f=0;
  for(i=0;i<ord*ord;i++){
    for(j=0;j<ord;j++){
      c[i] += a[j+k]*b[(j*ord)+f];
    }
    p++;
    f++;
    if(p==ord){
      f-=ord;
      k+=ord;
      p=0;
    }
  }
}
