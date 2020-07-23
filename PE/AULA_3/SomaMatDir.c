#include<stdio.h>
#include <stdlib.h>

void matriz(int a[][100], int n);
void somaDir(int a[][100], int b[][100], int n);

int main() {
  int n;
  int a[100][100], b[100][100];

  scanf("%d", &n);

  matriz(a, n);
  matriz(b, n);

  somaDir(a,b,n);

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

  void somaDir(int a[][100], int b[][100], int n){
    int i, j;

    for(i=0;i<2*n;i++){
      for(j=0;j<2*n;j++){
        if(i<n && j<n){
          printf("%d ", a[i][j]);
        } else if(i>=n && j>=n){
          printf("%d ", b[i-n][j-n]);
        } else{
          printf("%d ", 0);
        }
      }
      printf("\n");
    }

  }