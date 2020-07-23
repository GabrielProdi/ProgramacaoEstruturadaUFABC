#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double delta;
    scanf("%d %d %d",&a,&b,&c);
    delta = ((pow(b,2))-(4*a*c));
    if(delta>0){
        printf("%.4f %.4f\n",((-b+(sqrt(delta)))/(2*a)),((-b-(sqrt(delta)))/(2*a)));
    }

    return 0;
}