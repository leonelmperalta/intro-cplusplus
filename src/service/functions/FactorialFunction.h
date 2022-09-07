//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_FACTORIALFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_FACTORIALFUNCTION_H


#include <iostream>
#include "Function.h"
#include "../headers/Factorial.h"

using namespace std;

class FactorialFunction : public Function {
public:
    void exec() override {
        int number;
        cout << "Enter a number: " << endl;
        cin >> number;
        cout << "The factorial of the number entered is: " << Factorial::getFactorial(number) << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_FACTORIALFUNCTION_H
