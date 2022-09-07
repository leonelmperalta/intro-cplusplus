//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_SALARYFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_SALARYFUNCTION_H

#include <iostream>
#include "Function.h"
#include "../headers/Person.h"

using namespace std;

class SalaryFunction : public Function {
public:
    void exec() override {
        Person *maxSalaryPerson;
        Person *minSalaryPerson;
        bool isEnteringPersons = true;
        bool isFirstPerson = true;
        while(isEnteringPersons) {
            string name;
            double salary;
            int aux;
            cout << "Enter name: " << endl;
            cin >> name;
            cout << "Enter salary: " << endl;
            cin >> salary;
            if(isFirstPerson) {
                maxSalaryPerson = new Person(salary, name);
                minSalaryPerson = new Person(salary, name);
                isFirstPerson = false;
            } else {
                maxSalaryPerson = salary > maxSalaryPerson->getSalary() ? new Person(salary, name) : maxSalaryPerson;
                minSalaryPerson = salary < minSalaryPerson->getSalary() ? new Person(salary, name) : minSalaryPerson;
            }
            cout << "Do you want to keep entering persons? Enter 1 for yes, 0 for no." << endl;
            cin >> aux;
            isEnteringPersons = aux != 0;
        }
        cout << "Max salary: " << maxSalaryPerson->getSalary() << " . Name: " << maxSalaryPerson->getName() << endl;
        cout << "Min salary: " << minSalaryPerson->getSalary() << " . Name: " << minSalaryPerson->getName() << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_SALARYFUNCTION_H
