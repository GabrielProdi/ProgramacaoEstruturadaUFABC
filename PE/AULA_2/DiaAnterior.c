#include<stdio.h>

void DiaAnterior(int dia, int mes, int ano);
int bissexto(int ano);

int main() {
  int i, dia, mes, ano;

  scanf("%d %d %d", &dia, &mes, &ano);
  DiaAnterior(dia,mes,ano);

  return 0;
}

void DiaAnterior(int dia, int mes, int ano){
  if(dia>1) dia--;
  else if(mes==3){
    if(bissexto(ano)){
      dia=29;
    } else{
      dia=28;
    }
    mes--;
  } else if(mes!=3||mes!=5||mes!=7||mes!=10){
    dia=31;
    if(mes==1){
      mes=12;
      ano--;
    } else {
      mes--;
    }
  } else {
    dia=30;
    mes--;
  }

  printf("%d %d %d", dia, mes, ano);
}

int bissexto(int ano){
  if(ano%400==0){
    return 1;
  } else if(ano%4==0 && ano%100!=0){
    return 1;
  }else{
    return 0;
  }
}