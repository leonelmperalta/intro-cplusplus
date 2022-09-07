//
// Created by lperalta on 7/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ARRAYWITHOUTOCCURRENCES_H
#define EJERCICIOS_CPLUSPLUS_ARRAYWITHOUTOCCURRENCES_H

#include "Function.h"

using namespace std;

class ArrayWithoutOccurrences : public Function {
public:
    void exec() override {
        int vectorSize = 0;
        cout << "Enter the size of the array: " << endl;
        cin >> vectorSize;
        double numbers[vectorSize];
        cout << "Enter the numbers for the array: " << endl;
        for (int i = 0; i < vectorSize; i++) {
            cin >> numbers[i];
        }
        ArrayUtils::withoutOccurrences(numbers, vectorSize);
        ArrayUtils::printArray(numbers, vectorSize);
    }
};


#endif //EJERCICIOS_CPLUSPLUS_ARRAYWITHOUTOCCURRENCES_H
