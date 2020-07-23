#include<stdio.h>

/* retorna o mdc entre n1 e n2 */
/* assumindo n1<n2 */
int mdc(int n1, int n2);

/* nao modifique o main!! */
int main() {
  int n1, n2, r;
  scanf("%d %d", &n1, &n2);

  if (n1<n2) r = mdc(n1,n2);
  else r = mdc(n2, n1);

  printf("%d\n", r);
}

int mdc(int n1, int n2){
  int i,num=0;

  for(i=1;i<n2+1;i++){
    if(n1%i==0 && n2%i==0){
      num=i;
    }
  }

  return num;
}