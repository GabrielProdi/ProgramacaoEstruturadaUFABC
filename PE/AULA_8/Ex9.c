#include <stdio.h>

typedef struct country_s {
  char sigla[3];
  double populacao;
} country;

void imprime (country c) {
  printf("%s %.1f\n", c.sigla, c.populacao);
}

void muda (country *c1, country *c2);

int main(void) {
  country brasil = {"BRA", 209.3};
  country argentina = {"ARG", 44.2};

  imprime(brasil);
  imprime(argentina);

  //chame sua funcao aqui
  muda (&brasil, &argentina);

  imprime(brasil);
  imprime(argentina);
  return 0;
}

void muda (country *c1, country *c2){
  country c_aux;
  int i;

  for(i=0;i<3;i++){
  c_aux.sigla[i] = c1->sigla[i];
  c1->sigla[i] = c2->sigla[i];
  c2->sigla[i] = c_aux.sigla[i];
  }

  c_aux.populacao = c1->populacao;
  c1->populacao = c2->populacao;
  c2->populacao = c_aux.populacao;
}