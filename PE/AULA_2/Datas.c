#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int calendario(int dia, int mes);

int main() {
  int n, i, dia, mes, ano;

  scanf("%d", &n);

  for(i=0; i<n; i++) {
    scanf("%d %d %d", &dia, &mes, &ano);

    if(calendario(dia,mes)){
      printf("DATA VALIDA\n");
    }
    else{
      printf("DATA INVALIDA\n");
    }
  }

  return 0;
}

int calendario(int dia, int mes){
  if (mes>12){
    return 0;
  } else if(mes==2 && dia>28){
    return 0;
  } else if((mes==4 ||mes==6 ||mes==9 ||mes==11) && dia>30){
    return 0;
  } else return 1;

}