#include <stdio.h>

// Esta funcao calcula recursivamente o fatorial de n.
// Recebe um inteiro positivo n e devolve n!.
long int fatorialRecursivo (int n);

    int main () {
         int n;
         scanf ("%d", &n);
         printf ("%ld\n", fatorialRecursivo (n));
         return 0;
    }


    long int fatorialRecursivo (int n){
        long int fat;

        if (n<=1){
            return 1;
        }
        else {
            fat=n*fatorialRecursivo (n-1);
            return fat;
        }

    }