#include <stdio.h>
#include <math.h>//biblioteku

int main() {//pochatok programu
  int a,y;
  float x,t;//vedenia zminuh
  printf("Vedu cile chuslo a: ");
  scanf("%d",&a);
  printf("Vedu cile chuslo y: ");//vuvedenia
  scanf("%d",&y);//vvedenia
  t =(float) y*y-2*a; //pruklad iakuy e v koreni
  if (0 > t){
    printf("\n\tkorin z vid'emnogo chusla ne beretsia");
  }
  else {
    x = (float) a*sqrt(t);
printf("\n\t x = %.3f",x);
  }

  return 0;
}
