#include<stdio.h>

/* retorna 1 se n primo e 0 se n composto */
int primo(int n);

/* Nao modifique o main!! */
int main() {
  int n;
  scanf("%d", &n);
  if(primo(n)) {
    printf("PRIMO\n");
  } else {
    printf("COMPOSTO\n");
  }
  return 0;
}

int primo(int n){
  int i,cont=0;

  for(i=1;i<n+1;i++){
    if(n%i==0){
      cont++;
    }
  }
  if(cont==2){
    return 1;
  } else{
      return 0;
  }

}