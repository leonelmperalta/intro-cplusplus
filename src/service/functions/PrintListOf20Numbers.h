//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PRINTLISTOF20NUMBERS_H
#define EJERCICIOS_CPLUSPLUS_PRINTLISTOF20NUMBERS_H


#include <iostream>
#include "Function.h"

using namespace std;

class PrintListOf20Numbers : public Function {
public:
    void exec() override {
        int number;
        cout << "Enter a number: " << endl;
        cin >> number;
        for (int i = ++number; i < (number + 20); i++) {
            cout << i << endl;
        }
    }
};


#endif //EJERCICIOS_CPLUSPLUS_PRINTLISTOF20NUMBERS_H
