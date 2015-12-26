#include<stdio.h>

int main(){
  int QF, ID, GEN, ANO, DUR,i;
  char TITLE[100];
  double ORC;
  FILE *fp;

  scanf("%d", &QF);

  if((fp=fopen("input.txt","a+")) == NULL) exit(0);

  for(i=0;i<QF;i++){
    scanf("%s %lf %d %d %d %d", TITLE, &ORC, &ID, &GEN, &ANO, &DUR);
    fprinf(fp, "%s %lf %d %d %d %d\n", TITLE, ORC, ID, GEN, ANO, DUR);
  }

  fclose(fp);
  return 0;
}
