//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_NUMBERSORDERFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_NUMBERSORDERFUNCTION_H

#include "Function.h"
#include "../headers/NumbersOrder.h"

using namespace std;

class NumbersOrderFunction : public Function {
public:
    void exec() override {
        NumbersOrder::readASerieOfNumbersAndPrintItsOrder();
    }
};


#endif //EJERCICIOS_CPLUSPLUS_NUMBERSORDERFUNCTION_H
