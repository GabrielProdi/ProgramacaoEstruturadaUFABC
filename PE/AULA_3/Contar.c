#include<stdio.h>
#include <stdlib.h>

int busca(int test, int *val, int n);

int main() {
  int n, t, i;
  int *v;

  scanf("%d", &n);
  v = malloc(sizeof(int)*n);

  for(i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }

  scanf("%d", &t);
  printf("%d", busca(t,v,n));

  free(v);

  return 0;
  }

  int busca(int test, int *val, int n){
    int i,cont=0;

    for(i=0;i<n;i++){
      if(val[i]>=test) cont++;
    }

    return cont;
  }