//
// Created by lperalta on 25/8/2022.
//

#include <utility>

#include "../headers/Person.h"

Person::Person(double salary, string name) : _salary(salary), _name(std::move(name)) {}

double Person::getSalary() const {
    return _salary;
}

void Person::setSalary(double salary) {
    Person::_salary = salary;
}

const string &Person::getName() const {
    return _name;
}

void Person::setName(const string &name) {
    Person::_name = name;
}
