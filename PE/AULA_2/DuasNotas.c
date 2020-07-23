#include<stdio.h>

/* retorna 1, se eh possivel dar o troco em duas notas */
/* retorna 0, caso contrario */
int troco(int valor);

int main() {
  int n, m;

  while(1) {
    scanf("%d %d", &n, &m);
    if(!n && !m) break;

    if(troco(m-n)) {
      printf("possible\n");
    } else {
      printf("impossible\n");
    }
  }
  return 0;
}

int troco(int valor){
  int i,j;
  int notas[6]={2,5,10,20,50,100};

  for(i=0;i<6;i++){
    for(j=0;j<6;j++){
      if(notas[i]+notas[j]==valor){
        return 1;
      }
    }
  }

  return 0;
}