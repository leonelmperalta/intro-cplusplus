//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_SERIEOFNUMBERSDATA_H
#define EJERCICIOS_CPLUSPLUS_SERIEOFNUMBERSDATA_H

#include <iostream>
#include "Function.h"

using namespace std;

class SerieOfNumbersData : public Function {
public:
    void exec() override {
        int n = -1;
        int max;
        int min;
        int posMax;
        int posMin;
        int posCounter = 1;
        bool isFirstNumber = true;
        bool isEnteringNumbers = true;
        while (isEnteringNumbers) {
            cout << "Enter a a number: " << endl;
            cin >> n;
            if(isFirstNumber) {
                max = n;
                min = n;
                posMax = posCounter;
                posMin = posCounter;
                isFirstNumber = false;
            } else {
                bool isMax = n > max;
                bool isMin = n < min;
                max = isMax ? n : max;
                min = isMin ? n : min;
                posMax = isMax ? posCounter : posMax;
                posMin = isMin ? posCounter : posMin;
            }
            cout << "Do you want to enter another number? Enter 1 for yes, 0 for no." << endl;
            cin >> n;
            isEnteringNumbers = n == 1;
            posCounter ++;
        }
        cout << "Max: " << max << ", pos: " << posMax << endl;
        cout << "Min: " << min << ", pos: " << posMin << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_SERIEOFNUMBERSDATA_H
