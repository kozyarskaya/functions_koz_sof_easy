#include"easy.h"

//��������� �������� �����
bool itc_iseven(int number){
    if (number % 2 == 0)
        return 1;
    return 0;
}

//��������� ���� ������ �����
bool itc_ispositive(int number){
    if(number >= 0)
        return 1;
    return 0;
}

//��������� ���� ������������� �����
bool itc_ispositive_d(double number){
    if(number >= 0)
        return 1;
    return 0;
}
