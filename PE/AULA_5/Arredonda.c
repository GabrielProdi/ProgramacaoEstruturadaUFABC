#include <stdio.h>

void arredonda(int* v, int inicio,int fim);

int main() {
  int inicio , fim, i;
  int v[20];
  scanf("%d %d", &inicio, &fim);
  for (i=0; i<20; i++) {
    scanf("%d", &v[i]);
  }
  arredonda(v, inicio, fim);
  for(i=0; i<19; i++) {
    printf("%d ", v[i]);
  }
  printf("%d\n", v[19]);
}

void arredonda(int* v, int inicio,int fim){

  for(;inicio<fim; inicio++) {
    if((*(v+inicio)%10)!=0){
      int aux = (*(v+inicio)/10);
      *(v+inicio)=((aux+1)*10);
    }

  }
}