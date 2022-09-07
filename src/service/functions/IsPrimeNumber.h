//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ISPRIMENUMBER_H
#define EJERCICIOS_CPLUSPLUS_ISPRIMENUMBER_H

#include <iostream>
#include "Function.h"
#include "../../utils/headers/NumberUtils.h"

using namespace std;

class IsPrimeNumber : public Function {
public:
    void exec() override {
        int n;
        cout << "Enter the number: " << endl;
        cin >> n;
        cout << "The number entered is: " << (NumberUtils::isPrimeNumber(n) ? "prime" : "not prime") << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_ISPRIMENUMBER_H
