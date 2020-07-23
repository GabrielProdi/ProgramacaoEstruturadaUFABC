// gcc lanche1038.c -o lanche1038.exe

#include <stdio.h>

int main() {

   float p[] = {0.0, 4.0, 4.5, 5.0, 2.0, 1.5};
    
   int x, y;
   scanf("%d",&x);
   scanf("%d",&y);

   float total = p[x] * y;
   printf("Total: R$ %.2f\n", total);
   
   return 0;
}
