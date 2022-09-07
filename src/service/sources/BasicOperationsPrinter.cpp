//
// Created by Leonel on 14/8/2022.
//

#include "../headers/BasicOperationsPrinter.h"
using namespace std;

BasicOperationsPrinter::BasicOperationsPrinter(int fst, int snd) : fst(fst), snd(snd) {}

void BasicOperationsPrinter::printMultiplication() const {
    cout << "The multiplication of the numbers entered is: " << fst * snd << endl;
}

void BasicOperationsPrinter::printSubtraction() const {
    cout << "The subtraction of the numbers entered is: " << fst - snd << endl;
}

void BasicOperationsPrinter::printAddition() const {
    cout << "The addition of the numbers entered is: " << fst + snd << endl;
}

void BasicOperationsPrinter::printDivision() const {
    cout << "The division of the numbers entered is: " << fst / snd << endl;
}

void BasicOperationsPrinter::printAllBasicOperations() const {
    printAddition();
    printSubtraction();
    printMultiplication();
    printDivision();
}
