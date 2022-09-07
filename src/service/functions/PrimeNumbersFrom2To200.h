//
// Created by lperalta on 7/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PRIMENUMBERSFROM2TO200_H
#define EJERCICIOS_CPLUSPLUS_PRIMENUMBERSFROM2TO200_H

#include "Function.h"
#include "../../utils/headers/ArrayUtils.h"

using namespace std;

class PrimeNumbersFrom2To200 : public Function {
public:
    void exec() override {
        ArrayUtils::printPrimeNumbersFrom2To200();
    }
};


#endif //EJERCICIOS_CPLUSPLUS_PRIMENUMBERSFROM2TO200_H
