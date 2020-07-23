#include <stdio.h>

typedef struct cor_s {
  int r;
  int g;
  int b;
} cor;

int main() {
  //seu codigo aqui
  int r, g, b;


  scanf("%d %d %d", &r, &g, &b);
  cor c = {.r=r, .g=g, .b=b};

  printf("r=%d g=%d b=%d\n", c.r, c.g, c.b);

  return 0;
}