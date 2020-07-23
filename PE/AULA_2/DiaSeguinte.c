#include<stdio.h>

void DiaSeguinte(int dia, int mes, int ano);
int bissexto(int ano);

int main() {
  int i, dia, mes, ano;

  scanf("%d %d %d", &dia, &mes, &ano);
  DiaSeguinte(dia,mes,ano);

  return 0;
}

void DiaSeguinte(int dia, int mes, int ano){
  if(dia<28) dia++;
  else if(dia==28 && mes==2){
    if(bissexto(ano)){
      dia++;
    } else{
      dia=1;
      mes++;
    }
  } else if(dia==30 && (mes==4||mes==6||mes==9||mes==11)){
    dia=1;
    mes++;
  } else if(dia>30){
    dia=1;
    mes++;
    if(mes>12){
      mes=1;
      ano++;
    }
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