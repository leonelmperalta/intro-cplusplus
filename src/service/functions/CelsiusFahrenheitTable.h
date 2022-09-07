//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_CELSIUSFAHRENHEITTABLE_H
#define EJERCICIOS_CPLUSPLUS_CELSIUSFAHRENHEITTABLE_H

#include "Function.h"
#include "../../utils/headers/CelsiusFahrenheitUtils.h"

using namespace std;

class CelsiusFahrenheitTable : public Function {
public:
    void exec() override {
        CelsiusFahrenheitUtils::printTableOfRelationCelsiusFahrenheitFrom0To100WithIntervalsOf10();
    }
};


#endif //EJERCICIOS_CPLUSPLUS_CELSIUSFAHRENHEITTABLE_H
