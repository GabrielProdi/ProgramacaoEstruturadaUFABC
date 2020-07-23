#include <stdio.h>

#define tam 20

int main(void) {
  int N[tam];

  for(int i=0;i<tam;i++){
    //printf("Digite o numero da posição %d: ",i);
    scanf("%d",&N[i]);
  }

  for(int i=0;i<tam/2;i++){
    int aux = N[i];
    N[i]=N[tam-1-i];
    N[tam-1-i]=aux;
  }

  for(int i=0;i<tam;i++){
    printf("N[%d] : %d \n",i,N[i]);
  }

  return 0;
}