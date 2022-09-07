//
// Created by Leonel on 20/8/2022.
//

#include "../headers/Factorial.h"

int Factorial::getFactorial(int n) {
    if (n == 0) return 1;
    int result = n;
    for (int i = 1; i < n; ++i) {
        result *= i;
    }
    return result;
}
