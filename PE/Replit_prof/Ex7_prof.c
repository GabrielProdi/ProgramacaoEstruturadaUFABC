#include <stdio.h>

typedef struct ponto_s {
  double x;
  double y;
} ponto;

typedef struct circulo_s {
  ponto centro;
  double raio;
} circulo;

double dist2 (ponto p1, ponto p2) {
  return (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y);

}

int dentro (circulo c, ponto p) {
  if (dist2(c.centro, p)<= c.raio*c.raio)
    return 1;
  else
    return 0;
}

int main(void) {
  circulo c;
  ponto p;
  scanf("%lf %lf", &p.x, &p.y);
  scanf("%lf %lf %lf", &c.centro.x, &c.centro.y, &c.raio);
  if(dentro(c,p)) printf("DENTRO\n");
  else printf("FORA\n");
  return 0;
}