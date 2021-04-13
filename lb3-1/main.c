#include <stdio.h>
#include <math.h>//pidkluchennya bibliotek

int main(){//zapusk programu
int f; int r; float e;//vedennya zminuh

printf("Vedit cile chuslo f:  ");
scanf("%d",&f);
printf("Vedit cile chuslo r:  ");//vuvedennya
scanf("%d",&r);//vvedenya
if(f == 5){//umova
  e =(float) 3*f-2*r;//formula
printf("\n\te = %.2f\t",e);//vuvedenya na ekran
}
if(!f){
   e = (float)(sqrt(8*r))/(3*f-6);
printf("\n\te = %.2f\t",e);
}
if(f == -5){
  e = (float)f*r-9;
printf("\n\te = %.2f\t",e);
}
if(5 > f && 0 < f){
  printf("\n\tZnachennya ne mojluvo obchuslutu");
}
if(-5 < f && 0 > f){
  printf("\n\tZnachennya ne mojluvo obchuslutu");
}
if(5 < f || -5 > f){
  printf("\n\tZnachennya ne mojluvo obchuslutu");
}


return 0;
}//kinec programu