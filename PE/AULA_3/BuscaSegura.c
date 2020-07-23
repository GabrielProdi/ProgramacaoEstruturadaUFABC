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

  while(t>=0){
    scanf("%d", &t);
    if(busca(t,v,n)){
      printf("SIM\n");
    }
    else{
      printf("CHAVE NAO ENCONTRADA\n");
    }
  }

  free(v);

  return 0;
  }

  int busca(int test, int *val, int n){
    int i;

    for(i=0;i<n;i++){
      if(val[i]==test) return 1;
    }

    return 0;
  }