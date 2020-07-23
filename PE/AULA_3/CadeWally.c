#include<stdio.h>

void matriz(int a[][100], int n, int m);
int wally(int a[][100], int n, int m);

int main() {
  int m, n, pos;
  int a[100][100];

  scanf("%d", &n);
  scanf("%d", &m);

  matriz(a, n, m);

  pos = wally(a, n, m);

  if(pos!=-1){
      printf("%d %d\n", pos/10, pos%10);
    } else {
      printf("WALLY NAO ESTA NA MATRIZ\n");
    }

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

  int wally(int a[][100], int n, int m){
    int i, j, acima, abaixo, direita, esquerda;



    for(i=0;i<n;i++){
      for(j=0;j<m;j++){

        acima = i-1;
        abaixo = i+1;
        esquerda = j-1;
        direita = j+1;

        if(i==0) acima = n-1;
        if(i==n-1) abaixo = 0;
        if(j==0) esquerda = m-1;
        if(j==m-1) direita = 0;

        if(a[i][j]==1111){
          if(a[acima][j]==4 && a[abaixo][j]==8 && a[i][esquerda]==0 && a[i][direita]==0){
            return i*10+j;
          }
        }
      }
    }

    return -1;
  }