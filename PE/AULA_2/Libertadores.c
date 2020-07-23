#include<stdio.h>

/* retorna 1, se o time 1 ganha */
/* retorna 2, se o time 2 ganha */
/* retorna algum valor diferente de 1 e de 2 se vai para penaltis*/
int resultado(int a1, int a2, int b1, int b2);

int main() {
  int casos, a1, a2, b1, b2;
  int i, r;
  scanf("%d", &casos);
  for(i=0; i<casos; i++) {
    scanf("%d x %d", &a1, &a2);
    scanf("%d x %d", &b2, &b1);
    r = resultado(a1,a2,b1,b2);
    if(r==1 || r==2) {
      printf("Time %d\n", r);
    } else {
      printf("Penaltis\n");
    }
  }
}

int resultado(int a1, int a2, int b1, int b2){
  int pt1 =0, pt2 =0;

  if (a1>a2) {
    pt1+=3;
  }
  else if (a2>a1) {
    pt2+=3;
  }
  else {
    pt1++;
    pt2++;
  }
  if (b1>b2) {
    pt1+=3;
  }
  else if (b2>b1) {
    pt2+=3;
  }
  else {
    pt1++;
    pt2++;
  }

  if (pt1>pt2) {
    return 1;
  }
  else if (pt2>pt1) {
    return 2;
  }
  else {
    if ((a1+b1)>(a2+b2)){
      return 1;
    }
    else if ((a1+b1)<(a2+b2)) {
      return 2;
    }
    else if (b1>a2) {
      return 1;
    }
    else if (a2>b1) {
      return 2;
    }
    else {
      return 8;
    }
  }

  return 8;
}