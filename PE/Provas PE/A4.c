#include <stdio.h>

//funcao que realiza a conta desejada
int conta(int v[], int n);

int main(void) {
 int n,i;
 int v[20];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&v[i]);
  }

  printf("%d",conta(v,n));

  return 0;
}

int conta(int v[], int n){
  int r;

  if(n<0){
    return 1;
  } else if(n==1){
    return r=v[0]*v[1];
  } else {
    return r=(v[n-1])*conta(v,n-1);
  }
}