#include<stdio.h>

/* retorna a soma dos divisores de n */
int soma_divisores(int n);

/* Nao modifique o main!! */
int main() {
  int n;
  scanf("%d", &n);
  if(soma_divisores(n) == n) {
    printf("SIM\n");
  } else {
    printf("NAO\n");
  }
  return 0;
}

int soma_divisores(int n){
  int i,num=0;

  for(i=1;i<n+1;i++){
    if(n%i==0){
      num+=i;
      //printf("%d\n",i);
    }
  }
  return num-n;
}