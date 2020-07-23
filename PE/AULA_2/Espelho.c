#include<stdio.h>

/* retorn 1 se os nums sao espelho e 0 caso contrario */
int espelho(int n1, int n2);

/* Nao modifique o main!! */
int main() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  if(espelho(n1,n2)) {
    printf("espelho\n");
  } else {
    printf("nao espelho\n");
  }
  return 0;
}

int espelho(int n1, int n2){
  int aux=1000;

  while(aux>0){
    if(n1%10==(n2/aux)){
      n1=n1/10;
      n2=n2%aux;
      aux=aux/10;
      //printf("%d %d\n", n1, n2);
    } else{
      return 0;
      break;
    }
  }
  return 1;

}