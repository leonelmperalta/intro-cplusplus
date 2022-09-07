//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PRINTBASICOPERATIONS_H
#define EJERCICIOS_CPLUSPLUS_PRINTBASICOPERATIONS_H


#include "../headers/BasicOperationsPrinter.h"

class PrintBasicOperations : public Function {
    public:
        void exec() override {
            int firstNumber;
            int secondNumber;
            cout << "Enter the first number: " << endl;
            cin >> firstNumber;
            cout << "Enter the second number: " << endl;
            cin >> secondNumber;
            BasicOperationsPrinter *basicOperationsPrinter;
            basicOperationsPrinter = new BasicOperationsPrinter(firstNumber, secondNumber);
            basicOperationsPrinter->printAllBasicOperations();
        }
};


#endif //EJERCICIOS_CPLUSPLUS_PRINTBASICOPERATIONS_H
