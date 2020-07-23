#include<stdio.h>

/* imprime a resposta */
void imprime_podio(int t1, int t2, int t3);

/* Nao modifique o main!! */
int main() {
  int t1, t2, t3;
  scanf("%d %d %d", &t1, &t2, &t3);
  imprime_podio(t1, t2, t3);
  return 0;
}

void imprime_podio(int t1, int t2, int t3){
  if(t1<t2 && t1<t3){
    printf("%d\n",1);
    if(t2<t3){
      printf("%d\n%d\n",2,3);
    } else{
      printf("%d\n%d\n",3,2);
    }
  }

  else if(t2<t1 && t2<t3){
    printf("%d\n",2);
    if(t1<t3){
      printf("%d\n%d\n",1,3);
    } else{
      printf("%d\n%d\n",3,1);
    }
  }

  else if(t3<t1 && t3<t2){
    printf("%d\n",3);
    if(t1<t2){
      printf("%d\n%d\n",1,2);
    } else{
      printf("%d\n%d\n",2,1);
    }
  }

}