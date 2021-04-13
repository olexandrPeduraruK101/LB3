#include <stdio.h>
#include <locale.h>//п1дключення б1бл1отек
int main()//запуск програми
{
        setlocale(LC_ALL, "RUS");//п1дключаем крилицю
        int n;//ведення змінних
        printf("Введ1ть номер м1сяця: ");
        scanf("%d", &n);        
        switch(n)//запускаем операратор switch
        {
                case 1: printf("М1сяць: С1чень"); break;//оператор break перериває операторів
                case 2: printf("М1сяць: Лютий"); break;
                case 3: printf("М1сяць: Березень"); break;
                case 4: printf("М1сяць: Кв1тень"); break;
                case 5: printf("М1сяць: Травень"); break;
                case 6: printf("М1сяць: Червень"); break;
                case 7: printf("М1сяць: Липень"); break;
                case 8: printf("М1сяць: Серпень"); break;
                case 9: printf("М1сяць: Вересень"); break;
                case 10: printf("М1есяць: Жовтень"); break;
                case 11: printf("М1сяць: Листопад"); break;
                case 12: printf("М1сяць: Грудень"); break;                
        }
 
       if (1>n || n>12){//умова
       
            printf("Номер м1сяца повинен бути в межах в1д 1 до 12"); }
       return 0;
}//к1нець програми