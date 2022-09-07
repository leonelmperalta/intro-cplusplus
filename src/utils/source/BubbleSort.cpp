//
// Created by lperalta on 25/8/2022.
//
#include "../headers/BubbleSort.h"
using namespace std;

void BubbleSort::sort(int array[], int size) {
    for (int step = 0; step < size; ++step) {
        for (int i = 0; i < size - step; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}