//
// Created by lperalta on 1/9/2022.
//

#include <iostream>
#include "../headers/NumbersOrder.h"

using namespace std;

void NumbersOrder::readASerieOfNumbersAndPrintItsOrder() {
    int lastNumber;
    int actualNumber;
    int numberCount = 0;
    Orders order = NONE;
    bool isEnteringNumbers = true;
    int exit;
    cout << "Enter a serie of numbers: " << endl;
    while(isEnteringNumbers) {
        cin >> actualNumber;
        if(numberCount == 1) {
            if (actualNumber > lastNumber) { order = ASCENDING; }
            else if (actualNumber < lastNumber) { order = DESCENDING; }
            else { order = NONE; };
        }
        if(numberCount > 1) {
            if((order == ASCENDING && actualNumber <= lastNumber) || (order == DESCENDING && actualNumber >= lastNumber)) {
                order = NONE;
            }
        }
        lastNumber = actualNumber;
        numberCount++;
        cout << "Do you want to enter another number? 1 for yes, 0 for no.";
        cin >> exit;
        isEnteringNumbers = exit == 1;
    }
    cout << "The order of the numbers entered is: " << getOrderEnumName(order) << endl;
}

string NumbersOrder::getOrderEnumName(Orders order) {
    const string orderNames[] = {"ASCENDING", "DESCENDING", "NONE"};
    return orderNames[order];
}

