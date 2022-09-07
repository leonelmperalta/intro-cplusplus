//
// Created by lperalta on 3/9/2022.
//

#include <valarray>
#include "../headers/Polynomial.h"
#include <complex>

using namespace std;

complex<double> Polynomial::get2ndGradeRoot1(double a, double b, double c) {
    auto x = complex<double>((b*b) - (4*a*c));
    return (-b - sqrt(x)) / (2*a);
}

complex<double> Polynomial::get2ndGradeRoot2(double a, double b, double c) {
    auto x = complex<double>((b*b) - (4*a*c));
    return (-b + sqrt(x)) / (2*a);
}

bool Polynomial::hasRoots(double a, double b, double c) {
    auto rootA = get2ndGradeRoot1(a,b,c);
    auto rootB = get2ndGradeRoot2(a,b,c);
    return rootA.imag() == .0f || rootB.imag() == .0f;
}
