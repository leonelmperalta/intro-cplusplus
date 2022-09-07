//
// Created by lperalta on 7/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_MCDMCMFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_MCDMCMFUNCTION_H

#include <iostream>
#include "Function.h"
#include "../../utils/headers/NumberUtils.h"

using namespace std;

class McdMcmFunction : public Function {
public:
    void exec() override {
        int fst,snd;
        cout << "Enter two numbers: " << endl;
        cin >> fst;
        cin >> snd;
        cout << "MCM is: " << NumberUtils::getMCM(fst,snd) << endl;
        cout << "MCD is: " << NumberUtils::getMCD(fst,snd) << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_MCDMCMFUNCTION_H
