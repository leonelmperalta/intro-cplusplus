//
// Created by Leonel on 14/8/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_RECTANGLE_H
#define EJERCICIOS_CPLUSPLUS_RECTANGLE_H


class Rectangle {
    private:
        double base;
        double height;
    public:
        Rectangle(double base, double height);

    double getPerimeter() const;

    double getSurface() const;
};


#endif //EJERCICIOS_CPLUSPLUS_RECTANGLE_H
