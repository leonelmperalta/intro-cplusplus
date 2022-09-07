//
// Created by lperalta on 1/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_NUMBERSORDER_H
#define EJERCICIOS_CPLUSPLUS_NUMBERSORDER_H

#include "../constants/Orders.h"

using namespace std;

class NumbersOrder {
    public:
        static void readASerieOfNumbersAndPrintItsOrder();
        static string getOrderEnumName(Orders order);

};


#endif //EJERCICIOS_CPLUSPLUS_NUMBERSORDER_H
