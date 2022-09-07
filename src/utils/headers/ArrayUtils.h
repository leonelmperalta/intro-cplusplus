//
// Created by Leonel on 23/8/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ARRAYUTILS_H
#define EJERCICIOS_CPLUSPLUS_ARRAYUTILS_H

struct ArraySt {
    int length;
    int *array;
};


class ArrayUtils {
    public:
        static int maxElement(int arr[], int length);
        static int minElement(int arr[], int length);
        static int occurrencesOfInt(int arr[], int length, int n);
        static void printPrimeNumbersFrom2To200();
        static void printArray(int arr[], int length);
        static int* vectorAddition(int arrA[], int arrB[], int length);
        static int scalarProduct(int arrA[], int arrB[], int length);
        static double* withoutOccurrences(double arr[], int length);
        static void printArray(double *arr, int length);
        static int intersection(int A[], int B[], int intersection[], int lengthA, int lengthB);
        static void fill0(int arr[], int length);

    static void unionArray(int A[], int B[], int unionArray[], int lengthA, int lengthB);
};


#endif //EJERCICIOS_CPLUSPLUS_ARRAYUTILS_H
