#include <stdio.h>

typedef struct prova_s {
  double notas[100];
  int n;
  double media;
  double minimo;
  double maximo;
  double variancia;
} prova;

int main() {
  prova p;
  int i;

  scanf("%d", &p.n);
  for (i=0; i<p.n; i++) {
    scanf("%lf", &p.notas[i]);
  }

  p.media = 0;
  p.minimo = 10;
  p.maximo = 0;
  for(i=0; i<p.n; i++) {
    if (p.notas[i]>p.maximo) p.maximo = p.notas[i];
    if (p.notas[i]<p.minimo) p.minimo = p.notas[i];
    p.media += p.notas[i];
  }
  p.media /= p.n;
  p.variancia = 0;
  for(i=0; i<p.n; i++) {
    p.variancia += (p.notas[i]-p.media)*(p.notas[i]-p.media);
  }
  p.variancia /= p.n-1;
  printf("%.2f %.2f %.2f %.2f\n", p.media, p.minimo, p.maximo, p.variancia);
  return 0;
}