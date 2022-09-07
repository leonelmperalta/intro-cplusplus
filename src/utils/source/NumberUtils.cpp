//
// Created by lperalta on 4/9/2022.
//

#include <algorithm>
#include "../headers/NumberUtils.h"
using namespace std;

bool NumberUtils::isPrimeNumber(int n) {
    bool isPrime = true;
    for (int i = 2; i < n; i++) {
        if(n % i == 0) {
            isPrime = false;
        }
    }
    return isPrime;
}

int NumberUtils::getMCM(int fst, int snd) {
    int a = min(fst, snd);
    int b = max(fst, snd);
    return (a / getMCD(fst, snd)) * b;
}

int NumberUtils::getMCD(int fst, int snd) {
    if(snd == 0) {
        return fst;
    }
    return getMCD(snd, fst % snd);
}
