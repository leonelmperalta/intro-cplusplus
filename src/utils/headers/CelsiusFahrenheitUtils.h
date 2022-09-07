//
// Created by lperalta on 1/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_CELSIUSFAHRENHEITUTILS_H
#define EJERCICIOS_CPLUSPLUS_CELSIUSFAHRENHEITUTILS_H

#include <string>

using namespace std;

class CelsiusFahrenheitUtils {
    private:
        static const string TABLE_HEADER;
        static const string LINE;
    public:
        CelsiusFahrenheitUtils();
        static void printTableOfRelationCelsiusFahrenheitFrom0To100WithIntervalsOf10();
        static double celsiusToFahrenheit(double celsius);
};


#endif //EJERCICIOS_CPLUSPLUS_CELSIUSFAHRENHEITUTILS_H
