//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PRINTMAXANDMINANDOCCURRENCES_H
#define EJERCICIOS_CPLUSPLUS_PRINTMAXANDMINANDOCCURRENCES_H

#include <iostream>
#include "Function.h"
#include "../../utils/headers/ArrayUtils.h"

using namespace std;

class PrintMaxAndMinAndOccurrences : public Function {
public:
    void exec() override {
        int arrayLength;
        int max, min;
        cout << "Enter the amount of numbers to process: " << endl;
        cin >> arrayLength;
        int numbers[arrayLength];
        cout << "Enter the numbers: " << endl;
        for(int i = 0; i < arrayLength; i++) {
            cin >> numbers[i];
        }
        max = ArrayUtils::maxElement(numbers, arrayLength);
        min = ArrayUtils::minElement(numbers, arrayLength);
        cout << "Max: " << max << ", occurrences: " << ArrayUtils::occurrencesOfInt(numbers, arrayLength, max) << endl;
        cout << "Min: " << min << ", occurrences: " << ArrayUtils::occurrencesOfInt(numbers, arrayLength, min) << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_PRINTMAXANDMINANDOCCURRENCES_H
