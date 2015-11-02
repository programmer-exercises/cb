/*
Universidade de Brasília
Nome: Paulo Henrique Tada Ferreira Santos
Mat: 11-0135431
Prof.: Luiz Laranjeira
*/

#include<stdio.h>
#include<stdbool.h>

#define DAY 1
#define MONTH 2
#define YEAR 3

bool check(int date, int type){
  bool result = true;
  switch(type){
    case DAY:
      if(date>30 || date<1){
        printf("hi");
        result = false;
      }
      break;
    case MONTH:
      if(date>12 || date<1) result = false;
      break;
    case YEAR:
      if(date>=2020 || date<=0) result = false;
      break;
  }
  return result;
}

int check_date(int type){
  int date;
  bool ck = false;
  while(scanf("%d", &date)){
    ck = check(date, type);
    if(ck == true) break;
  }
  return date;
}

int diffdate(int DN, int MN, int AN, int DH, int MH, int AH){
  int born = DN + (MN*30) + (AN*12*30);
  int current = DH + (MH*30) + (AH*12*30);
  int result = current - born;
  return result;
}

int main(){
  int DN,MN,AN,DH,MH,AH;

  DN = check_date(DAY);
  MN = check_date(MONTH);
  AN = check_date(YEAR);

  DH = check_date(DAY);
  MH = check_date(MONTH);
  AH = check_date(YEAR);

  while(AN>=AH){
    AH = check_date(YEAR);
  }

  printf("%d\n", diffdate(DN,MN,AN,DH,MH,AH));
  
  return 0;
}
