#include <locale.h> // для подключения русского языка
#include <stdio.h>  // подключение процедур ввода вывода
#include "Nod.h"
int main()
{  
    int a,b;
    setlocale(0,"russian"); // подключение русского языка
    puts("Введите два натуральных числа:");
    scanf("%d %d",&a,&b);
    printf("НОД %d и %d = %d.\n",a,b,nod(a,b));
    return 0;
}