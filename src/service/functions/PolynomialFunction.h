//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_POLYNOMIALFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_POLYNOMIALFUNCTION_H

#include <iostream>
#include "Function.h"
#include "../../utils/headers/Polynomial.h"

using namespace std;

class PolynomialFunction : public Function {
public:
    void exec() override {
        double a,b,c;
        cout << "Enter the three coefficients: " << endl;
        cin >> a;
        cin >> b;
        cin >> c;
        bool hasRoots = Polynomial::hasRoots(a,b,c);
        cout << "The polynomial entered" << (hasRoots ? " have" : " don't have") << " roots." << endl;
        if(hasRoots) {
            cout << "Root x1 is: " << Polynomial::get2ndGradeRoot1(a,b,c).real() << endl;
            cout << "Root x2 is: " << Polynomial::get2ndGradeRoot2(a,b,c).real() << endl;
        }
    }
};


#endif //EJERCICIOS_CPLUSPLUS_POLYNOMIALFUNCTION_H
