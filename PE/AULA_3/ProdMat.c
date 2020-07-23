#include<stdio.h>
#include <stdlib.h>

void matriz(int a[][100], int n);
void multiplicacao(int a[][100], int b[][100], int n);

int main() {
  int n;
  int a[100][100], b[100][100];

  scanf("%d", &n);

  matriz(a, n);
  matriz(b, n);

  multiplicacao(a,b,n);

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

  void multiplicacao(int a[][100], int b[][100], int n){
    int i, j, k;
    int c[100][100];

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        for(k=0;k<n;k++){
          c[i][j] += a[i][k]*b[k][j];
        }
        printf("%d ", c[i][j]);
      }
      printf("\n");
    }

  }