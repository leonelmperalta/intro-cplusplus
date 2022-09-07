//
// Created by Leonel on 23/8/2022.
//

#include <iostream>
#include <valarray>
#include "../headers/ArrayUtils.h"
#include "../headers/NumberUtils.h"
#include "../headers/BubbleSort.h"

using namespace std;

int ArrayUtils::maxElement(int arr[], int length) {
    int max = arr[0];
    for (int i = 1; i < length; ++i) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int ArrayUtils::minElement(int arr[], int length) {
    int min = arr[0];
    for (int i = 1; i < length; ++i) {
        if(arr[i] < min) min = arr[i];
    }
    return min;
}

int ArrayUtils::occurrencesOfInt(int arr[], int length, int n) {
    int occurrences = 0;
    for (int i = 0; i < length; i++) {
        if(arr[i] == n) occurrences++;
    }
    return occurrences;
}

void ArrayUtils::printArray(int arr[], int length) {
    if(length > 0) {
        cout << "[";
        for (int i = 0; i < length - 1; i++) {
            cout << arr[i] << ",";
        }
        cout << arr[length - 1];
        cout << "]" << endl;
    } else {
        cout << "[]" << endl;
    }

}

void ArrayUtils::printArray(double arr[], int length) {
    cout << "[";
    for (int i = 0; i < length - 1; i++) {
        cout << arr[i] << ",";
    }
    cout << arr[length - 1];
    cout << "]" << endl;
}

void ArrayUtils::printPrimeNumbersFrom2To200() {
    int primeNumbersCount = 0;
    for (int i = 2; i < 200; i++) {
        if(NumberUtils::isPrimeNumber(i)) {
            primeNumbersCount++;
        }
    }
    int primeNumbers[primeNumbersCount];
    int j = 0;
    for (int i = 2; i < 200; ++i) {
        if(NumberUtils::isPrimeNumber(i)) {
            primeNumbers[j++] = i;
        }
    }
    printArray(primeNumbers, primeNumbersCount);
}

int* ArrayUtils::vectorAddition(int arrA[], int arrB[], int length) {
    static int vectorAddition[2] = {0,0};
    for (int i = 0, j = 0; i < length; i++, j++) {
        vectorAddition[j] += arrA[i] + arrB[i];
    }
    return vectorAddition;
}

int ArrayUtils::scalarProduct(int arrA[], int arrB[], int length) {
    int scalarProduct = 0;
    for (int i = 0, j = 0; i < length; i++, j++) {
        scalarProduct += arrA[i] * arrB[i];
    }
    return scalarProduct;
}

double *ArrayUtils::withoutOccurrences(double arr[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = i+1; j < length; j++) {
            if(arr[i] != NAN && arr[i] == arr[j]) {
                arr[j] = NAN;
            }
        }
    }
    return arr;
}

int ArrayUtils::intersection(int A[], int B[], int intersection[], int lengthA, int lengthB) {
    int intersectionLength = 0;
    fill0(intersection, min(lengthA,lengthB));
    for (int i = 0, k = 0; i < lengthA; i++) {
        for (int j = 0; j < lengthB; j++) {
            if(A[i] == B[j]) {
                intersection[k++] = A[i];
                intersectionLength++;
            }
        }
    }
    return intersectionLength;
}

void ArrayUtils::fill0(int arr[], int length) {
    for (int i = 0; i < length; ++i) {
        arr[i] = 0;
    }
}

void ArrayUtils::unionArray(int A[], int B[], int unionArray[], int lengthA, int lengthB) {
    for (int i = 0; i < lengthA; ++i) {
        unionArray[i] = A[i];
    }
    int lastElementPos = lengthA;
    for (int i = 0; i < lengthB; i++) {
        bool alreadyExists = false;
        for (int j = 0; j < lengthA; ++j) {
            if(B[i] == unionArray[j]) {
                alreadyExists = true;
            }
        }
        if(!alreadyExists) {
            unionArray[lastElementPos++] = B[i];
        }
    }
}
