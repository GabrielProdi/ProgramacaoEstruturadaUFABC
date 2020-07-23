#include <stdio.h>

int main(){
    int tempo,seg,min,hora =0;

    scanf("%d",&tempo);

   hora=tempo/3600;
   min=(tempo-(3600*hora))/60;
   seg=(tempo-(3600*hora)-(60*min));

    printf("%d:%d:%d\n",hora,min,seg);

    return 0;
}