//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_RECTANGLEFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_RECTANGLEFUNCTION_H


#include <iostream>
#include "Function.h"
#include "../headers/Rectangle.h"

using namespace std;

class RectangleFunction : public Function {
    public:
        void exec() override {
            double base;
            double height;
            Rectangle *rectangle;
            cout << "Enter rectangle base: " << endl;
            cin >> base;
            cout << "Enter rectangle height: " << endl;
            cin >> height;
            rectangle = new Rectangle(base, height);
            cout << "Rectangle perimeter is: " << rectangle->getPerimeter() << endl;
            cout << "Rectangle surface is: " << rectangle->getSurface() << endl;
        }
};


#endif //EJERCICIOS_CPLUSPLUS_RECTANGLEFUNCTION_H
