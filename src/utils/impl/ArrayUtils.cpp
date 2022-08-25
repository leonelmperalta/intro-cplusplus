//
// Created by Leonel on 23/8/2022.
//

#include "../ArrayUtils.h"

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
