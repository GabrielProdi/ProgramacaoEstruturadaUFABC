#include <stdio.h>
#include <stdlib.h>

double mediana(double *v, int n);

int main() {
  int c, n;
  double *v;

  scanf("%d",&c);
  while(c){
    c--;
    scanf("%d",&n);
    v=malloc(n*sizeof(double));
    for(int i=0;i<n;i++){
      scanf("%lf",&v[i]);
    }
    printf("%.2lf\n", mediana(v,n));
    free(v);
  }

  return 0;
}

double mediana (double *v, int n){
  int i,j;

  for(i=0;i<(n-1);i++){
    for(j=i+1;j<n;j++){
      if(*(v+i)>*(v+j)){
        double aux = *(v+i);
        *(v+i)=*(v+j);
        *(v+j)=aux;
      }
    }
  }

  if(n%2){
    return *(v+(n/2));
  }else{
    return ((*((v+(n/2)-1))+*((v+(n/2))))/2);
  }

}