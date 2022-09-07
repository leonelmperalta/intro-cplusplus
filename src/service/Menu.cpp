//
// Created by lperalta on 7/9/2022.
//

#include <iostream>
#include "Menu.h"
#include "constants/MenuOptions.h"
#include "functions/Function.h"

using namespace std;

void Menu::printMenu() {
    int function = 0;
    int isOperating = true;
    cout << "Hello! this is a project with several function in order to learn c++ language. Chose the function you want to call." << endl;
    for (int i = 0; i < MenuOptions::OPTIONS_AMOUNT; ++i) {
        cout << MenuOptions::ALL_OPTIONS_ARRAY[i] << endl;
    }
    while(isOperating) {
        int aux;
        cin >> function;
        Function *func = Function::getFunction(function);
        func->exec();
        cout << "Do you want to make another operation? 1 for yes, 0 for no.";
        cin >> aux;
        isOperating = aux != 0;
    }
}
