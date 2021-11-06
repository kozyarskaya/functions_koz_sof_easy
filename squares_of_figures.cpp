#include"easy.h"

//Площадь квадрата в целых числах
int itc_skv(int side){
    if (side <= 0){
        return -1;
    }
    else{
    return side * side;
    }
}

//Площадь прямоугольника в целых числах
int itc_spr(int side_a, int side_b){
    if (side_a <= 0 || side_b <= 0){
        return -1;
    }
    else{
    return side_a * side_b;
    }
}

//Площадь треугольника в целых числах
int itc_str(int size_a, int size_b, int size_c){
    if( size_a <= 0 || size_b <= 0 || size_c <= 0){
        return -1;
            }
    if ((size_a + size_b) > size_c && (size_b + size_c) > size_a && (size_a + size_c) > size_b){
        int p, s;
        p = (size_a + size_b + size_c) / 2;
         s = p *(p - size_a)*(p - size_b)*(p - size_c);
        return itc_sqrt(s);
    }
    return -1;
}

//Площадь круга в целых числах
double itc_scir(int radius){
    double pi = 3.14;
    if (radius <= 0){
        return -1;
    }
    else{
    return pi * (radius * radius);
    }
}
