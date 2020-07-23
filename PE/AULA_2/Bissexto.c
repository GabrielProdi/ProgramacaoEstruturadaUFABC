#include<stdio.h>

/* retorna 1 se o ano for bissexto e 0, caso contrário */
int bissexto(int ano);

int main() {
  int n;
  scanf("%d", &n);
  if(bissexto(n)) {
    printf("ANO BISSEXTO\n");
  } else {
    printf("ANO NAO BISSEXTO\n");
  }
}

int bissexto(int ano){
  if(ano%400==0){
    return 1;
  } else if(ano%4==0 && ano%100!=0){
    return 1;
  }else{
    return 0;
  }
}