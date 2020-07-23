void adiciona (int v, lista *lt){

  node *novo = malloc(sizeof(node));
  novo->v = v;
  novo->prox = NULL;

  if(lt->primeiro==NULL){
    lt->primeiro=novo;
  } else {
    lt->ultimo->prox = novo;
  }

  lt->ultimo = novo;

}

void percorre(lista lt) {
  for(node *nd=lt.primeiro; nd!=NULL;nd = nd->prox)
    imprime_node(*nd);
}

int main(void) {
  lista lt;
  init_lista(&lt);
  adiciona(12, &lt);
  adiciona(23, &lt);
  adiciona(34, &lt);
  adiciona(45, &lt);
  percorre(lt);

  return 0;
}