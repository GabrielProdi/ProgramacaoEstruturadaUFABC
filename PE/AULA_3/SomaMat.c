#include<stdio.h>
#include <stdlib.h>

void matriz(int a[][100], int n);
void soma(int a[][100], int b[][100], int n);

int main() {
  int n;
  int a[100][100], b[100][100];

  scanf("%d", &n);

  matriz(a, n);
  matriz(b, n);

  soma(a,b,n);

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

  void soma(int a[][100], int b[][100], int n){
    int i, j;

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
        printf("%d ", a[i][j] + b[i][j]);
      }
      printf("\n");
    }

  }