#include <stdio.h>

// Esta funcao calcula recursivamente a potencia
// de 'a' elevado a 'n'.
long int potenciaRecursivo (int a, int n);

    int main () {
         int a, n;
         scanf ("%d %d", &a, &n);

         printf ("%ld\n", potenciaRecursivo (a, n));

         return 0;
    }

    long int potenciaRecursivo (int a, int n){
        long int pot;

        if (n<=0){
            return 1;

        } else{
            pot=a * potenciaRecursivo (a, (n-1));
            return pot;

        }
    }