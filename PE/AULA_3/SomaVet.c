#include<stdio.h>
#include <stdlib.h>

int soma(int *val, int n);

int main() {
  int n, i;
  int *v;

  scanf("%d", &n);
  v = malloc(sizeof(int)*n);

  for(i=0; i<n; i++) {
    scanf("%d", &v[i]);
  }

  printf("%d", soma(v,n));

  free(v);

  return 0;
  }

  int soma(int *val, int n){
    int i,sum=0;

    for(i=0;i<n;i++){
      sum += val[i];
    }

    return sum;
  }