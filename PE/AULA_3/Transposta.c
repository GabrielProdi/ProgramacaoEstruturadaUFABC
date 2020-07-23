#include<stdio.h>

void matriz(int a[][100], int m, int n);
void transposta(int a[][100], int m, int n);

int main() {
  int m, n;
  int a[100][100];

  scanf("%d", &n);
  scanf("%d", &m);

  matriz(a, n, m);

  transposta(a, n, m);

  return 0;
  }

  void matriz(int a[][100], int n, int m){
    int i, j;

    for(i=0; i<n; i++) {
      for(j=0; j<m; j++){
        scanf("%d", &a[i][j]);
      }
    }
  }

  void transposta(int a[][100], int n, int m){
    int i, j;

    for(i=0;i<m;i++){
      for(j=0;j<n;j++){
        if(j==n-1){
          printf("%d\n", a[j][i]);
        }
        else printf("%d ", a[j][i]);
      }
    }
  }