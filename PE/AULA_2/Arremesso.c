#include<stdio.h>

 /* retorna 1 se a bola cai no buraco na posicao n com velocidade
inicial EXATAMENTE v */
 /* caso contrario, retorna 0*/
int checa (int n, int v);

int main () {
  int n, v, i, possivel;

  while(1) {
    scanf("%d %d", &n, &v);
    if(n==0) break;

    possivel = 0;
    for (i=1; i<=v; i++) {
      if(checa(n,i)) {
        printf("possivel\n");
        possivel = 1;
      	break;
      }
    }
    if(!possivel) printf("impossivel\n");
  }
  return 0;
}

int checa (int n, int v){
  int i,pos=0;

  while(v>0){

    for(i=1;i<=v;i++){
      //printf("teste: %d   n: %d\n", ((v*i)+pos), n);
      if(((v*i)+pos)==n){
        return 1;
      }
    }

    pos=pos+(v*v);
    //printf("v: %d   pos: %d\n", v, pos);
    v--;
  }

  return 0;
}