//
// Created by lperalta on 1/9/2022.
//

#include <iostream>
#include "../headers/CelsiusFahrenheitUtils.h"

using namespace std;

const string CelsiusFahrenheitUtils::TABLE_HEADER = "|      CELSIUS       |     FAHRENHEIT    |";
const string CelsiusFahrenheitUtils::LINE = "-----------------------------------------";

void CelsiusFahrenheitUtils::printTableOfRelationCelsiusFahrenheitFrom0To100WithIntervalsOf10() {
    cout << LINE << endl;
    cout << TABLE_HEADER << endl;
    cout << LINE << endl;
    for (int i = 0; i < 210; i += 10) {
        cout << "|         " << i << "         |         " << celsiusToFahrenheit(i) << "         |" << endl;
        cout << LINE << endl;
    }
}

double CelsiusFahrenheitUtils::celsiusToFahrenheit(double celsius) {
    return (celsius * (9.0/5.0)) + 32;
}
