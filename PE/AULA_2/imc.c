#include<stdio.h>

/* Calcula o imc a partir da altura e peso */
double calcula_imc(double altura, double peso);

/* Imprime a classificacao de acordo com o IMC */
void imprime_resposta(double imc);

/* Nao modifique o main!!! */
int main() {
  double a, p, imc;
  scanf("%lf %lf", &a, &p);
  imc = calcula_imc(a,p);
  imprime_resposta(imc);
}

double calcula_imc(double altura, double peso){
    return (peso/(altura*altura));
}

void imprime_resposta(double imc){

  if(imc>=40){
    char result[] = "Obesidade Grau III (morbida)";
    printf("%s\n", result);
  } else if(imc>=35){
    char result[] = "Obesidade Grau II (severa)";
    printf("%s\n", result);
  }else if(imc>=30){
    char result[] = "Obesidade Grau I";
    printf("%s\n", result);
  }else if(imc>=25){
    char result[] = "Sobrepeso";
    printf("%s\n", result);
  }else if(imc>=18.5){
    char result[] = "Saudavel";
    printf("%s\n", result);
  }else if(imc>=17){
    char result[] = "Magreza leve";
    printf("%s\n", result);
  }else if(imc>=16){
    char result[] = "Magreza moderada";
    printf("%s\n", result);
  }else{
    char result[] = "Magreza grave";
    printf("%s\n", result);
  }

}