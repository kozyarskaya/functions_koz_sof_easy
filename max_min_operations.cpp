#include"easy.h"

//�������� �� 2 ����� �����
int itc_max(int first, int second){
    if (first > second)
        return first;
    return second;
}

//������� �� 2 ����� �����
int itc_min(int first, int second){
    if (first < second)
        return first;
    return second;
}

//�������� �� 2 ������������ �����
double itc_fmax(double first, double second){
    if (first > second)
        return first;
    return second;
}

//������� �� 2 ������������ �����
double itc_fmin(double first, double second){
    if (first < second)
        return first;
    return second;
}
