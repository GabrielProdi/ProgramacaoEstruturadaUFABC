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
  novo->prox = lt->primeiro;
  lt->primeiro = novo;
}

lista *intercala(lista lt1, lista lt2) {
  lista *lt3 = malloc(sizeof(lista));
  init_lista(lt3);
  node *a1, *a2;
  a1 = lt1.primeiro;
  a2 = lt2.primeiro;
  node *atual = NULL;
  node *novo;
  while(a1 && a2) {
    novo = malloc(sizeof(node));
    novo->prox = NULL;
    if(a1->v <= a2->v) {
      novo->v = a1->v;
      a1 = a1->prox;
    } else {
      novo->v = a2->v;
      a2 = a2->prox;
    }
    if(atual==NULL) {
      lt3->primeiro = novo;
    } else {
      atual->prox = novo;
    }
    atual = novo;
  }
  if(a1) {
    for(; a1!=NULL; a1=a1->prox) {
      novo = malloc(sizeof(node));
      novo->v = a1->v;
      novo->prox = NULL;
      if(atual==NULL) {
        lt3->primeiro = novo;
      } else {
        atual->prox = novo;
      }
      atual = novo;
    }
  }
  if(a2) {
    for(; a2!=NULL; a2=a2->prox) {
      novo = malloc(sizeof(node));
      novo->v = a2->v;
      novo->prox = NULL;
      if(atual==NULL) {
        lt3->primeiro = novo;
      } else {
        atual->prox = novo;
      }
      atual = novo;
    }
  }
  return lt3;
}

void imprime(lista lt) {
  for(node *atual=lt.primeiro; atual!=NULL; atual=atual->prox) {
    printf("%d ", atual->v);
  }
  printf("\n");
}

int main(void) {
  lista lt1, lt2;
  init_lista(&lt1);
  init_lista(&lt2);
  int n=1;
  while(n>0) {
    scanf("%d", &n);
    if(n>0)
      adiciona(n, &lt1);
  }
  n=1;
  while(n>0) {
    scanf("%d", &n);
    if(n>0)
      adiciona(n, &lt2);
  }
  lista lt3 = *intercala(lt1, lt2);
  imprime(lt1);
  imprime(lt2);
  imprime(lt3);
 return 0;
}