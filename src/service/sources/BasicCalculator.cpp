//
// Created by Leonel on 20/8/2022.
//

#include <utility>

#include "../headers/BasicCalculator.h"

using namespace std;

BasicCalculator::BasicCalculator(int a, int b, string operation) : a(a), b(b), operation(move(operation)) {
    basicOperationsPrinter = new BasicOperationsPrinter(a, b);
}

void BasicCalculator::printResultOfOperation() {
    if(operation == "+") {
        basicOperationsPrinter->printAddition();
    } else if (operation == "-") {
        basicOperationsPrinter->printSubtraction();
    } else if (operation == "*") {
        basicOperationsPrinter->printMultiplication();
    } else if (operation == ":") {
        basicOperationsPrinter->printDivision();
    } else {
        cout << "Operation not valid." << endl;
    }
}
