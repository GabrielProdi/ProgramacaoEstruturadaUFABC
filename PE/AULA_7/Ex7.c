#include <stdio.h>

typedef struct ponto_s {
  double x;
  double y;
} ponto;

typedef struct circulo_s {
  ponto centro;
  double raio;
} circulo;

int dentro (circulo c, ponto p){

  if((((p.x-c.centro.x)*(p.x-c.centro.x)) + ((p.y-c.centro.y)*(p.y-c.centro.y)))<(c.raio*c.raio)){
    return 1;
  } else{
    return 0;
  }
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