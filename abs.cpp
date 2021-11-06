#include"easy.h"

//Модуль целого числа
int itc_abs(int number){

    if (number >= 0){
        return number;
        }
    return number * (-1);

}

//Модуль вещественного числа
double itc_fabs(double number)
{
    if (number >= 0){
        return number;
        }
    return number * (-1);

}
