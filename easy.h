#ifndef EASY_H_INCLUDED
#define EASY_H_INCLUDED
#include <iostream>

using namespace std;

//fio
void itc_name();
void itc_fio();
//abs
int itc_abs(int number);
double itc_fabs(double number);

//number_parameters
bool itc_iseven(int number);
bool itc_ispositive(int number);
bool itc_ispositive_d(double number);

//operations_on_numbers
int itc_revnbr(int number);
int itc_sqrt(int number);
double itc_pow(int number, int pow);

//max_min_operations
int itc_max(int first, int second);
int itc_min(int first, int second);
double itc_fmax(double first, double second);
double itc_fmin(double first, double second);

//squares_of_figures
int itc_skv(int side);
int itc_spr(int side_a, int side_b);
int itc_str(int side_a, int side_b, int side_c);
double itc_scir(int radius);
#endif // FUNCTIONS_LEVEL_EASY_H_INCLUDED
