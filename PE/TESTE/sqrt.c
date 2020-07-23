// gcc sqrt.c -o sqrt.exe -lm
#include <stdio.h>
#include <math.h>

int main()
{
    double num = 6, squareRoot;

    squareRoot =  sqrt(num);
    printf("Square root of %.4lf =  %.4lf", num, squareRoot);

    return 0;
}
