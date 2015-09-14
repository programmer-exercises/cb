#include<stdio.h>

int main(){
  double ht, vh, sl, sb, inss,ir;

  while(scanf("%lf %lf",&ht,&vh)){
    if(ht<=0) break;
    sb = ht*vh;
    inss = sb*0.11;
    if((sb-inss)<900) ir=0;
    if((sb-inss)>=900 && (sb-inss)<1800) ir=((sb-inss)*0.15) - 135;
    if((sb-inss)>=1800) ir=((sb-inss)*0.275) - 360;

    sl = sb - inss - ir;
    printf("%.2lf\n",sl);
  }
  return 0;
}
