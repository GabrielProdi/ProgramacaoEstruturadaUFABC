#include <stdio.h>
#include <stdlib.h>

typedef struct aluno_s{
  int nota;
  int ano;
} aluno;

int comp(const void *a, const void *b){
  int nota_a = ((aluno *)a)->nota;
  int nota_b = ((aluno *)b)->nota;
  int ano_a = ((aluno *)a)->ano;
  int ano_b = ((aluno *)b)->ano;

  if (nota_a - nota_b) return nota_b - nota_a;
  return ano_a - ano_b;

}

int main() {
  int n, i;
  aluno *a;

  scanf("%d", &n);

  a = malloc(sizeof(aluno)*n);

  for(i=0; i<n; i++){
    scanf("%d %d", &a[i].nota, &a[i].ano);
  }

  qsort(a, n, sizeof(aluno), comp);

  for(i=0; i<n; i++){
    printf("%d %d\n", a[i].nota, a[i].ano);
  }

  return 0;
}