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
  if(busca(t,v,n)){
    printf("SIM\n");
  }
  else{
    printf("NAO\n");
  }

  free(v);

  return 0;
  }

  int busca(int test, int *val, int n){
    int i, j;

    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
        if(val[i]+val[j]==test) return 1;
      }
    }

    return 0;
  }