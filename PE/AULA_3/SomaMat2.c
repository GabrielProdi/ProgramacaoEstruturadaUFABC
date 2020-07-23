#include<stdio.h>

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
    int i, j, sum=0;

    for(i=1;i<n;i++){
      for(j=0;j<n;j++){
        if(j<i){
          sum += a[i][j];
        }
      }
    }

    return sum;
  }