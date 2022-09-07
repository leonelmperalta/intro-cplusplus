//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PRINTENTEREDNUMBER_H
#define EJERCICIOS_CPLUSPLUS_PRINTENTEREDNUMBER_H


#include "Function.h"

using namespace std;

class PrintEnteredNumber : public Function {
    public:
        void exec() override {
            int n;
            cout << "Enter a number:" << endl;
            cin >> n;
            cout << "The number entered is: " << n << endl;
        }
};


#endif //EJERCICIOS_CPLUSPLUS_PRINTENTEREDNUMBER_H
