//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_SPHEREFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_SPHEREFUNCTION_H


#include <iostream>
#include "Function.h"
#include "../headers/Sphere.h"

using namespace std;

class SphereFunction : public Function {
    public:
        void exec() override {
            double radio;
            cout << "Enter the sphere radio: " << endl;
            cin >> radio;
            auto *sphere = new Sphere(radio);
            cout << "The sphere volume is: " << sphere->getSurface() << endl;
            cout << "The sphere surface is: " << sphere->getVolume() << endl;
        }
};


#endif //EJERCICIOS_CPLUSPLUS_SPHEREFUNCTION_H
