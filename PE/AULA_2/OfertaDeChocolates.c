#include<stdio.h>

/* retorna o numero de chocolates */
int chocolates(int n, int c, int m);


int main() {
  int t, n, c, m, i;
  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d %d %d", &n, &c, &m);
    printf("%d\n", chocolates(n, c, m));
  }
  return 0;

}

int chocolates(int n, int c, int m){
  int embala, promo, choco;
  embala = n/c;
  choco = embala;
  while(embala>=m){
    promo = embala/m;
    choco += promo;
    embala = promo + (embala%m);
  }

  return choco;
}