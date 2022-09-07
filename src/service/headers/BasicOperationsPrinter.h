//
// Created by Leonel on 14/8/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_BASICOPERATIONSPRINTER_H
#define EJERCICIOS_CPLUSPLUS_BASICOPERATIONSPRINTER_H


#include <iostream>

class BasicOperationsPrinter {

    private:
        int fst;
        int snd;

    public:
        BasicOperationsPrinter(int fst, int snd);

        void printAddition() const;

        void printSubtraction() const;

        void printMultiplication() const;

        void printDivision() const;

        void printAllBasicOperations() const;
};


#endif //EJERCICIOS_CPLUSPLUS_BASICOPERATIONSPRINTER_H
