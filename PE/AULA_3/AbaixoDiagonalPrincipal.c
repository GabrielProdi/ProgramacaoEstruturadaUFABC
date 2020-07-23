#include<stdio.h>

void matriz(int a[][100], int n);
double trianguloInferior(int a[][100], int op, int n);

int main() {
  int n, t;
  int a[100][100];
  char op;

  scanf("%c", &op);
  scanf("%d", &n);

  matriz(a, n);

  if(op=='S') t=1;
  else if (op=='M') t=0;
  printf("%.1f\n", trianguloInferior(a,t,n));

  return 0;
  }

  void matriz(int a[][100], int n){
    int i, j;

    for(i=0; i<n; i++) {
      for(j=0; j<n; j++){
        scanf("%d", &a[i][j]);
      }
    }
  }

  double trianguloInferior(int a[][100], int op, int n){
    int i, j, cont=0;
    double sum=0;

    for(i=1;i<n;i++){
      for(j=0;j<n;j++){
        if(j<i){
          sum += a[i][j];
          cont++;
        }
      }
    }

    if(op) return sum;
    else return sum/cont;
  }