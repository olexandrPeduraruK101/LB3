#include <stdio.h>
#include <math.h>//pidkluchenia bibliotek

int main() {//zapusk programu
 float x1,y1,x2,y2,x3,y3;//vedenya zmin

printf("Vedit cordunatu x1: ");
scanf("%f",&x1);
printf("Vedit cordunatu y1: ");
scanf("%f",&y1);
printf("Vedit cordunatu x2: ");
scanf("%f",&x2);
printf("Vedit cordunatu y2: ");
scanf("%f",&y2);
printf("Vedit cordunatu x3: ");
scanf("%f",&x3);
printf("Vedit cordunatu y3: ");//vuvedennya na ekran
scanf("%f",&y3);//vvedenya

if ((x3-x1)*(y1-y2) == (y3-y1)*(x1-x2)) {//umova dlya znahodjennya tochok na odniy linii
  printf("\n\tVsi tochku znahodiatsia na odniy priamiy");
}
else printf("\n\tTochku ne lejat na odniy priamiy");
  return 0;
}//kinec programu