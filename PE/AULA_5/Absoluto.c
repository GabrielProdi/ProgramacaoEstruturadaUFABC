#include<stdio.h>

void absoluto (int* x);

int main() {
  int x;
  int n, i;
  scanf("%d", &n);

  for(int i=0; i<n; i++) {
    scanf("%d", &x);
    absoluto(&x);
    printf("%d\n", x);
  }
  return 0;
}

void absoluto (int* x){
  if(*x<0){
    *x=-*x;
  }
}