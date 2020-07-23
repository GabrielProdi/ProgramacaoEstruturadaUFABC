#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int pulo(int *alt, int p, int n);

int main() {
  int p, n, i;
  int *canos;
  scanf("%d %d", &p, &n);
  canos = malloc(sizeof(int)*n);
  for(i=0; i<n; i++) {
    scanf("%d", &canos[i]);
  }

  if(pulo(canos,p,n)){
    printf("YOU WIN\n");
  }
  else{
    printf("GAME OVER\n");
  }
  free(canos);

  return 0;
  }

int pulo(int *alt, int p, int n){
  int i,pulos=0;

  for(i=0;i<n-1;i++){
    if(abs(alt[i]-alt[i+1])>p){
      return 0;
    } else pulos++;
  }

  if(pulos==n-1) return 1;
  return 0;
}