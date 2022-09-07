//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_MULTIPLICATION_H
#define EJERCICIOS_CPLUSPLUS_MULTIPLICATION_H

#include <iostream>
#include "Function.h"

using namespace std;

class Multiplication : public Function {
public:
    void exec() override {
        int A;
        int B;
        int multiplication = 0;
        cout << "Enter two numbers: " << endl;
        cin >> A;
        cin >> B;
        for (int i = 0; i < B; ++i) {
            multiplication += A;
        }
        cout << "Result : " << multiplication;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_MULTIPLICATION_H
