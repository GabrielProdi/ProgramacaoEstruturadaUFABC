#include <stdio.h>

//funcao que realiza a conta desejada
double conta(double v[], int n);

int main(void) {
 int n,i;
 double v[100];

  scanf("%d",&n);

  for(i=0;i<n+1;i++){
    scanf("%lf",&v[n-i]);
  }

  printf("%.2lf\n",conta(v,n));

  return 0;
}

double conta(double v[], int n){
  int i;
  double r;

  if(n==0){
    return v[0];
  } else{
    r=v[n]+1/conta(v,n-1);
    return r;
  }

}