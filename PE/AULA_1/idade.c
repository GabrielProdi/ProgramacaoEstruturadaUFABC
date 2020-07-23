#include <stdio.h>

int main(){
    int ano_nasc, ano_atual;
    char nome[100];

    //printf("Digite o ano atual, seu primeiro nome e seu ano de nascimento, separados por um espaço: \n");
    scanf("%d %s %d",&ano_atual,nome,&ano_nasc);
    printf("%s, voce completa %d anos de idade neste ano.\n",nome,(ano_atual-ano_nasc));

    return 0;
}