#include <stdio.h>

int main(void) {
    int T,cont;
    int N[1000];

    scanf("%d",&T);

    if(T>1&&T<51){
        while(cont<1000){
            for(int j=0;j<T;j++){
                if(cont<1000){
                    N[cont]=j;
                    cont++;
                }
            }
        }

        for(int i=0;i<1000;i++){
            printf("N[%d] = %d\n",i,N[i]);
        }
    }


    return 0;
}