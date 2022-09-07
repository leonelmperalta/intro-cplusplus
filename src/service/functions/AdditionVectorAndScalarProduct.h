//
// Created by lperalta on 7/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ADDITIONVECTORANDSCALARPRODUCT_H
#define EJERCICIOS_CPLUSPLUS_ADDITIONVECTORANDSCALARPRODUCT_H

#include <iostream>
#include "Function.h"
#include "../../utils/headers/ArrayUtils.h"

using namespace std;

class AdditionVectorAndScalarProduct : public Function {
public:
    void exec() override {
        int length;
        cout << "Enter the array size: " << endl;
        cin >> length;
        int arrA[length];
        int arrB[length];
        cout << "Enter the numbers of first array: " << endl;
        for (int j = 0; j < length; j++) {
            cin >> arrA[j];
        }
        cout << "Enter the numbers of second array: " << endl;
        for (int j = 0; j < length; j++) {
            cin >> arrB[j];
        }
        int* vectorAddition = ArrayUtils::vectorAddition(arrA, arrB, length);
        int scalarProduct = ArrayUtils::scalarProduct(arrA, arrB, length);
        cout << "Vector addition: ";
        ArrayUtils::printArray(vectorAddition, 2);
        cout << "Scalar product: " << scalarProduct << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_ADDITIONVECTORANDSCALARPRODUCT_H
