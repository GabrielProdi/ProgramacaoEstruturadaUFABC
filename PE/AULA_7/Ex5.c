#include <stdio.h>

typedef struct prova_s {
  double notas[100];
  int n;
  double media;
  double minimo;
  double maximo;
  double variancia;
} prova;

  double media (prova p);
  double minimo (prova p);
  double maximo (prova p);
  double variancia (prova p);

int main() {
  prova p;
  int i;

  scanf("%d", &p.n);

  for(i=0;i<p.n;i++){
    scanf("%lf", &p.notas[i]);
  }

  p.media = media (p);
  p.minimo = minimo (p);
  p.maximo = maximo (p);
  p.variancia = variancia (p);

  printf("%.2lf %.2lf %.2lf %.2lf\n", p.media, p.minimo, p.maximo, p.variancia);

  return 0;
}

  double media (prova p){
    int i;
    double soma;

    for(i=0;i<p.n;i++){
      soma += p.notas[i];
    }

    return soma/p.n;
  }

  double minimo (prova p){
    double min = p.notas[0];
    int i;

    for(i=1;i<p.n;i++){
      if (p.notas[i]<min){
        min = p.notas[i];
      }
    }

    return min;
  }

  double maximo (prova p){
    double max = p.notas[0];
    int i;

    for(i=1;i<p.n;i++){
      if (p.notas[i]>max){
        max = p.notas[i];
      }
    }

    return max;
  }

  double variancia (prova p){
    double soma=0;
    int i;

    for(i=0;i<p.n;i++){
      soma += (p.notas[i] - p.media) * (p.notas[i] - p.media);
    }

    return (soma/((p.n)-1));
  }