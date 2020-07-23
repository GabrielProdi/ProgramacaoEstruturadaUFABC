#include<stdio.h>
#include <string.h>

void DataToString(int dia, char mes[], int ano, char *meses[12]);

int main() {
  int dia, ano;
  char mes[10];
  char *meses[12] = {
    "Janeiro",
    "Fevereiro",
    "Marco",
    "Abril",
    "Maio",
    "Junho",
    "Julho",
    "Agosto",
    "Setembro",
    "Outubro",
    "Novembro",
    "Dezembro"
  };

    while(scanf("%d de %s de %d\n", &dia, mes, &ano)==3){
      DataToString(dia,mes,ano,meses);
    }

  return 0;
}

void DataToString(int dia, char mes[], int ano, char *meses[12]){
  int i;

  for(i=0;i<12;i++){
    if(strcmp(mes,meses[i])==0){
      printf("%d %d %d\n", dia, i+1, ano);
    }
  }

}