#include<stdio.h>

void matriz(int a[][100], int n);
int ampulheta(int a[][100], int n);

int main() {
  int n=6;
  int a[100][100];

  matriz(a, n);

  printf("%d\n", ampulheta(a,n));

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

  int ampulheta(int a[][100], int n){
    int i, j, sum=0, maior=0;

    for(i=0;i<n-2;i++){
      for(j=0;j<n-2;j++){
        sum = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];

        if(sum>=0 && sum>maior){
          maior=sum;
        } else if(sum<0 && -sum>maior){
          maior=sum;
        }
      }
    }

    return maior;
  }