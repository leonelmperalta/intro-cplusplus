//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_CHOOSEBASICOPERATIONS_H
#define EJERCICIOS_CPLUSPLUS_CHOOSEBASICOPERATIONS_H


#include <string>
#include <iostream>
#include "Function.h"
#include "../headers/BasicCalculator.h"

using namespace std;

class ChooseBasicOperations : public Function {
public:
    void exec() override {
        int fst;
        int snd;
        string operation;
        cout << "Enter the first number: " << endl;
        cin >> fst;
        cout << "Enter the second number: " << endl;
        cin >> snd;
        cout << "Enter the operation to make. Valid operations are: '+, -, *, or :' " << endl;
        cin >> operation;
        auto *calculator = new BasicCalculator(fst, snd, operation);
        calculator->printResultOfOperation();
    }
};


#endif //EJERCICIOS_CPLUSPLUS_CHOOSEBASICOPERATIONS_H
