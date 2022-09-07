//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_COMPARENUMBERWITHZERO_H
#define EJERCICIOS_CPLUSPLUS_COMPARENUMBERWITHZERO_H


#include <string>
#include <iostream>
#include "Function.h"

using namespace std;

class CompareNumberWithZero : public Function {
public:
    void exec() override {
        double number;
        string comparison;
        cout << "Enter a real number: " << endl;
        cin >> number;
        if (number > 0) {
            comparison = "GREATER THAN";
        } else if (number < 0) {
            comparison = "LESS THAN";
        } else {
            comparison = "EQUAL TO";
        }
        cout << "The number that you have entered is " << comparison << " zero." << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_COMPARENUMBERWITHZERO_H
