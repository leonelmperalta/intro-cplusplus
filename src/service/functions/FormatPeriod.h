//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_FORMATPERIOD_H
#define EJERCICIOS_CPLUSPLUS_FORMATPERIOD_H


#include <iostream>
#include "Function.h"
#include "../../utils/headers/TimeUtils.h"

using namespace std;

class FormatPeriod : public Function {
public:
    void exec() override {
        int period;
        cout << "Enter the period: " << endl;
        cin >> period;
        cout << TimeUtils::getTimeInDDHHMMSSFromSeconds(period) << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_FORMATPERIOD_H
