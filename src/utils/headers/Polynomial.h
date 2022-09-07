//
// Created by lperalta on 3/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_POLYNOMIAL_H
#define EJERCICIOS_CPLUSPLUS_POLYNOMIAL_H

#include <complex>
using namespace std;

class Polynomial {
    public:
        static bool hasRoots(double a, double b, double c);
        static complex<double> get2ndGradeRoot1(double a, double b, double c);
        static complex<double> get2ndGradeRoot2(double a, double b, double c);
};


#endif //EJERCICIOS_CPLUSPLUS_POLYNOMIAL_H
