//
// Created by Leonel on 14/8/2022.
//

#include "../Sphere.h"

Sphere::Sphere(double radio) : radio(radio) {}

double Sphere::getSurface() const {
    return 4 * M_PI * pow(radio, 2);
}

double Sphere::getVolume() const {
    return (4.0/3.0) * M_PI * pow(radio,3);
}
