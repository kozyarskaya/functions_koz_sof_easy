#include"easy.h"

//Максимум из 2 целых чисел
int itc_max(int first, int second){
    if (first > second)
        return first;
    return second;
}

//Минимум из 2 целых чисел
int itc_min(int first, int second){
    if (first < second)
        return first;
    return second;
}

//Максимум из 2 вещественных чисел
double itc_fmax(double first, double second){
    if (first > second)
        return first;
    return second;
}

//Минимум из 2 вещественных чисел
double itc_fmin(double first, double second){
    if (first < second)
        return first;
    return second;
}
