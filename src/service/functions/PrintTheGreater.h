//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PRINTTHEGREATER_H
#define EJERCICIOS_CPLUSPLUS_PRINTTHEGREATER_H


#include <iostream>
#include "Function.h"

using namespace std;

class PrintTheGreater : public Function {
public:
    void exec() override {
        double fst;
        double snd;
        cout << "Enter the first real number: " << endl;
        cin >> fst;
        cout << "Enter the second real number: " << endl;
        cin >> snd;
        cout << "The greatest number is: " << (fst > snd ? fst : snd);
    }
};


#endif //EJERCICIOS_CPLUSPLUS_PRINTTHEGREATER_H
