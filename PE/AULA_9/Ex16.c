#include <stdio.h>
#include <stdlib.h>

typedef struct node_s {
  int v;
  struct node_s *prox;
} node;

typedef struct lista_s {
  node *primeiro;
} lista;

void init_lista(lista *lt) {
  lt->primeiro = NULL;
}

void adiciona (int v, lista *lt){
  node *novo = malloc(sizeof(node));
  novo->v = v;
  novo->prox = NULL;

  node *anterior = NULL;
  node *atual = lt->primeiro;

  if(atual==NULL){
    lt->primeiro = novo;
  } else{

    while(atual != NULL && atual->v < v){
      anterior = atual;
      atual = atual->prox;
    }

    if(atual==NULL){
      anterior->prox = novo;
    } else{
      if(anterior!=NULL){
        anterior->prox = novo;
      } else{
        lt->primeiro = novo;
      }
      novo->prox = atual;
    }

  }
}

void imprime(lista lt) {
  for(node *atual=lt.primeiro; atual!=NULL; atual=atual->prox) {
    printf("%d ", atual->v);
  }
  printf("\n");
}

int main(void) {
  lista lt1;
  init_lista(&lt1);
  int n=1;
  while(n>0) {
    scanf("%d", &n);
    if(n>0)
      adiciona(n, &lt1);
  }
  imprime(lt1);
 return 0;
}