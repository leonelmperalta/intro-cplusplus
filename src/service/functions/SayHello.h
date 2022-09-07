//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_SAYHELLO_H
#define EJERCICIOS_CPLUSPLUS_SAYHELLO_H


#include <iostream>
#include "Function.h"

using namespace std;

class SayHello : public Function {
    public:
        void exec() override {
            char name[50];
            cout << "Please, enter your name: " << endl;
            cin >> name;
            cout << "Hello " << name << "!" << endl;
        }

};


#endif //EJERCICIOS_CPLUSPLUS_SAYHELLO_H
