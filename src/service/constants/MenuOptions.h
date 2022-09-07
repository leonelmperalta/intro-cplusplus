//
// Created by lperalta on 7/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_MENUOPTIONS_H
#define EJERCICIOS_CPLUSPLUS_MENUOPTIONS_H

#include <string>

using namespace std;

class MenuOptions {
    public:
        static string READ_NUMBER_AND_PRINT;
        static string READ_NUMBER_AND_PRINT_BASIC_OPERATIONS;
    static string SAY_HELLO;
    static string SPHERE_FUNCTION;
    static string RECTANGLE_FUNCTION;
    static string COMPARE_TO_ZERO;
    static string PRINT_THE_GREATER;
    static string IS_EVEN;
    static string IS_DIVISIBLE;
    static string CHOSE_OPERATIONS;
    static string PERIOD_FORMAT;
    static string NUMBERS_FROM_N_TO_20;
    static string FACTORIAL;
    static string PARTIAL_SUM;
    static string MAX_MIN_AND_POS;
    static string MAX_MIN_AND_OCCURRENCES;
    static string MULTIPLICATION;
    static string TOP_3;
    static string SALARY;
    static string NUMBERS_ORDER;
    static string CELSIUS_FAHRENHEIT;
    static string AVERAGE_OF_NUMBERS;
    static string POLYNOMIAL;
    static string IS_PRIME;
    static string MCM_MCD;
    static string PRIMES_BETWEEN_2_AND_200;
    static string ADDITION_VECTOR_SCALAR_PRODUCT;
    static string ENGLISH_EXAM;
    static string WITHOUT_OCCURRENCES;
    static string UNION_INTERSECTION;
    static const int OPTIONS_AMOUNT = 30;
    static string ALL_OPTIONS_ARRAY[OPTIONS_AMOUNT];
};
#endif //EJERCICIOS_CPLUSPLUS_MENUOPTIONS_H
