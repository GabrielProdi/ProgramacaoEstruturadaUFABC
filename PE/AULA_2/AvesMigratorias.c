#include<stdio.h>
#include <stdlib.h>

int moda(int *aves, int n);

int main() {
  int n, i;
  int *v;
  scanf("%d", &n);
  v = malloc(sizeof(int)*n);
  for(i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }

  printf("%d\n", moda(v,n));
  free(v);

  return 0;
  }

int moda(int *aves, int n){
  int i, k, maior =0;
  int *soma = malloc(sizeof(int)*5);

  for(i=0;i<n;i++){
    soma[(aves[i])-1]++;
  }

  for(k=1;k<5;k++){
    if(soma[k]>soma[maior]) maior = k;
  }

  free(soma);

  return maior+1;
}