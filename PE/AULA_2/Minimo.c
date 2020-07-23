#include<stdio.h>

/* retorna o menor numero informado*/
int minimo(void);

/* Nao modifique o main!! */
int main() {
  int n = minimo();

  if(n<0) {
    printf("nenhum numero informado\n");
  } else {
    printf("%d\n",n);
  }
  return 0;
}

int minimo(void){
  int aux=0,num=-1;

  scanf("%d",&aux);
  num=aux;

  while (!(aux<0)){
    scanf("%d",&aux);
    if(aux<num && aux>=0){
      num=aux;
    }
  }

  return num;
}