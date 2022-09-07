//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_NUMBERSLOTAVERAGE_H
#define EJERCICIOS_CPLUSPLUS_NUMBERSLOTAVERAGE_H

#include <iostream>
#include "Function.h"

using namespace std;

class NumbersLotAverage : public Function {
private:
    void readNLotsOfNumbersAndPrintAvgOfEachAndOfAllLots() {
        int numberOfLots = 0;
        cout << "Enter the number of lots to enter: " << endl;
        cin >> numberOfLots;
        double lotsAvg[numberOfLots];
        for (int i = 0; i < numberOfLots; i++) {
            lotsAvg[i] = readNumbersAndGetAvg();
        }
        for (int i = 0; i < numberOfLots; i++) {
            cout << "Average of lot number: " << i << " . is: " << lotsAvg[i] << endl;
        }
        cout << "Average of all numbers entered: " << getTotalAverage(lotsAvg, numberOfLots) << endl;

    }


    double getTotalAverage(const double lots[], int length) {
        double avg = 0;
        for (int i = 0; i < length; ++i) {
            avg += lots[i];
        }
        return avg / length;
    }

    double readNumbersAndGetAvg() {
        cout << "Enter numbers, when you finish, type 0." << endl;
        int count = 0;
        double n = -1;
        double sum = 0;
        while(n != 0) {
            cin >> n;
            sum += n;
            count ++;
        }
        return sum / (count - 1);
    }
public:
    void exec() override {
        readNLotsOfNumbersAndPrintAvgOfEachAndOfAllLots();
    }
};


#endif //EJERCICIOS_CPLUSPLUS_NUMBERSLOTAVERAGE_H
