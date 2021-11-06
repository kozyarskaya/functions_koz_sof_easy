#include"easy.h"

//Переворачивает трёхзначное число
int itc_revnbr(int number){
    int first, second, third, summ;
    first = (number / 100);
    second = ((number % 100) / 10) * 10;
    third = ((number % 100) % 10) * 100;
    summ = first + second + third;
    return summ;
}
//Вычисляет квадратный корень
int itc_sqrt(int number){
    int i;
    for(i = 0; i <= number / 2; i+=1){
        if (i * i == number){
            return i;
        }
    }
    return -1;
}


//Вычисляет степень числа
double itc_pow(int number, int pow){
    if (pow == 0)
        return 1;
    if (pow < 0){
        pow = pow * -1;
        return (1/number) * itc_pow(number, pow - 1);}
    return number * itc_pow(number, pow - 1);
    }


