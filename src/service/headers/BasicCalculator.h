//
// Created by Leonel on 20/8/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_BASICCALCULATOR_H
#define EJERCICIOS_CPLUSPLUS_BASICCALCULATOR_H

#include <string>
#include "BasicOperationsPrinter.h"
using namespace std;

class BasicCalculator {
    private:
        int a;
        int b;
        string operation;
        BasicOperationsPrinter *basicOperationsPrinter;
    public:
        BasicCalculator(int a, int b, string operation);
        void printResultOfOperation();

};


#endif //EJERCICIOS_CPLUSPLUS_BASICCALCULATOR_H
