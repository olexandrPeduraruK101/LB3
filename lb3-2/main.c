#include <stdio.h>
#include <math.h>//pidkluchennya bibliotek

int main (){//zapusk programu
int f; int r; float e;//vedennya zminuh

printf("Vedit cile chuslo f:  ");
scanf("%d",&f);
printf("Vedit cile chuslo r:  ");//vuvedennya na ekran
scanf("%d",&r);//vvedenya chusla
if(f == 5){//umova
  e =(float) 3*f-2*r;//formula
printf("\n\te = %.2f\t",e);//vuvedenya resultatu na ekran
}
else if(!f){
   e = (float)(sqrt(8*r))/(3*f-6);
printf("\n\te = %.2f\t",e);
}
else if(f == -5){
  e = (float)f*r-9;
printf("\n\te = %.2f\t",e);
}
else{//else iakscho nichogo ne pidiyde
  printf("\n\tZnachennya ne mojluvo obchuslutu");//vuvedenya resultatu na ekran
}
  return 0;
}//kinec programu