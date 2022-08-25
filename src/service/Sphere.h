//
// Created by Leonel on 14/8/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_SPHERE_H
#define EJERCICIOS_CPLUSPLUS_SPHERE_H


#include <cmath>

class Sphere {
    private:
        double radio;

    public:
        explicit Sphere(double radio);

        double getSurface() const;

        double getVolume() const;
};


#endif //EJERCICIOS_CPLUSPLUS_SPHERE_H
