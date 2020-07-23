#include<stdio.h>
#include <stdlib.h>

void matriz(int a[][100], int n);
int soma(int a[][100], int n);

int main() {
  int n;
  int a[100][100];

  scanf("%d", &n);

  matriz(a, n);

  printf("%d\n", soma(a,n));

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

  int soma(int a[][100], int n){
    int i, j, sum=0,m=1;

    for(i=0;i<n-1;i++){
      for(j=0;j<n-m;j++){
        sum += a[i][j];
      }
      m++;
    }

    return sum;
  }