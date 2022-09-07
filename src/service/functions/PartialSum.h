//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PARTIALSUM_H
#define EJERCICIOS_CPLUSPLUS_PARTIALSUM_H


#include <iostream>
#include "Function.h"

using namespace std;

class PartialSum : public Function {
public:
    void exec() override {
        cout << "Enter the numbers you want to sum. When you finish, enter 0." << endl;
        int n = -1;
        int sum = 0;
        while(n != 0) {
            cin >> n;
            sum += n;
            cout << sum;
        }
        cout << "The sum of the numbers entered is: " << sum << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_PARTIALSUM_H
