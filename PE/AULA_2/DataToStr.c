#include<stdio.h>

int calendario(int dia, int mes);

int main() {
  int dia, mes, ano;

    while(scanf("%d %d %d", &dia, &mes, &ano)==3){
      switch (mes){
        case 1:
          printf("%.2d de Janeiro de %d\n",dia, ano);
          break;
        case 2:
          printf("%.2d de Fevereiro de %d\n",dia, ano);
          break;
        case 3:
          printf("%.2d de Marco de %d\n",dia, ano);
          break;
        case 4:
          printf("%.2d de Abril de %d\n",dia, ano);
          break;
        case 5:
          printf("%.2d de Maio de %d\n",dia, ano);
          break;
        case 6:
          printf("%.2d de Junho de %d\n",dia, ano);
          break;
        case 7:
          printf("%.2d de Julho de %d\n",dia, ano);
          break;
        case 8:
          printf("%.2d de Agosto de %d\n",dia, ano);
          break;
        case 9:
          printf("%.2d de Setembro de %d\n",dia, ano);
          break;
        case 10:
          printf("%.2d de Outubro de %d\n",dia, ano);
          break;
        case 11:
          printf("%.2d de Novembro de %d\n",dia, ano);
          break;
        case 12:
          printf("%.2d de Dezembro de %d\n",dia, ano);
          break;
      }
    }

  return 0;
}
