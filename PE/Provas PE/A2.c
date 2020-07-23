#include <stdio.h>
#include <stdlib.h>

//funcao que realiza a conta desejada
int conta(int *v, int n);

int main(void) {
  int*v;
  int n,i;

  scanf("%d",&n);
  v=malloc(sizeof(int)*n);

  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }

  printf("%d",conta(v,n));
  free(v);
  return 0;
}

int conta(int *v, int n){
  int i,j,r;

  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(*(v+i)==*(v+j)){
        r++;
      }
    }
  }
  return n-r; //erro aqui para caso geral
}