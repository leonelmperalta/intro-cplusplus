//
// Created by lperalta on 7/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_UNIONANDINTERSECTION_H
#define EJERCICIOS_CPLUSPLUS_UNIONANDINTERSECTION_H

#include <iostream>
#include "Function.h"
#include "../../utils/headers/BubbleSort.h"
#include "../../utils/headers/ArrayUtils.h"

using namespace std;

class UnionAndIntersection : public Function {
public:
    void exec() override {
        int vectorASize = 0;
        int vectorBSize = 0;
        cout << "Enter the size of the first array: " << endl;
        cin >> vectorASize;
        int A[vectorASize];
        cout << "Enter the numbers for the first array: " << endl;
        for (int i = 0; i < vectorASize; i++) {
            cin >> A[i];
        }
        cout << "Enter the size of the second array: " << endl;
        cin >> vectorBSize;
        int B[vectorBSize];
        cout << "Enter the numbers for the second array: " << endl;
        for (int i = 0; i < vectorBSize; i++) {
            cin >> B[i];
        }
        int intersection[min(vectorASize, vectorBSize)];
        int unionArrayLength = vectorASize + vectorBSize;
        int unionArray[unionArrayLength];
        BubbleSort::sort(A, vectorASize - 1);
        BubbleSort::sort(B, vectorBSize - 1);
        int intersectionLength = ArrayUtils::intersection(A, B, intersection, vectorASize, vectorBSize);
        ArrayUtils::unionArray(A, B, unionArray, vectorASize, vectorBSize);
        ArrayUtils::printArray(intersection, intersectionLength);
        ArrayUtils::printArray(unionArray, unionArrayLength);
    }
};


#endif //EJERCICIOS_CPLUSPLUS_UNIONANDINTERSECTION_H
