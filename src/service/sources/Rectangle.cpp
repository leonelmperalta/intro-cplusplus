//
// Created by Leonel on 14/8/2022.
//

#include <valarray>
#include "../headers/Rectangle.h"

Rectangle::Rectangle(double base, double height) : base(base), height(height) {}

double Rectangle::getPerimeter() const {
    return pow(base, 2) + pow(height, 2);
}

double Rectangle::getSurface() const {
    return base * height;
}
