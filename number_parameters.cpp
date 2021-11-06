#include"easy.h"

//Проверяет чётность числа
bool itc_iseven(int number){
    if (number % 2 == 0)
        return 1;
    return 0;
}

//Проверяет знак целого числа
bool itc_ispositive(int number){
    if(number >= 0)
        return 1;
    return 0;
}

//Проверяет знак вещественного числа
bool itc_ispositive_d(double number){
    if(number >= 0)
        return 1;
    return 0;
}
