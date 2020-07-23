#include <stdio.h>

/* retorna o num de divisores pares de n */
int div(int n);

/* Nao modifique o main!! */
int main () {
  int n;
  scanf("%d", &n);
  printf("%d\n", div(n));
  return 0;
}

int div(int n){
  int cont=0;

  for (int i=n;i>0;i--){
    if(n%i==0){
      if(i%2==0){
        cont++;
      }
    }
  }

  return cont;
}