#include <stdio.h>
#include <stdlib.h>

typedef struct cor_s {
  int *r;
  int *g;
  int *b;
} cor;

int main(void) {
  //seu codigo
  cor c;

  c.r = malloc(sizeof(int)*1);
  c.g = malloc(sizeof(int)*1);
  c.b = malloc(sizeof(int)*1);
  scanf("%d %d %d", c.r, c.g, c.b);
  printf("r=%d g=%d b=%d\n", *c.r, *c.g, *c.b);
  free(c.r);
  free(c.g);
  free(c.b);

  return 0;
}