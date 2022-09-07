//
// Created by lperalta on 25/8/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PERSON_H
#define EJERCICIOS_CPLUSPLUS_PERSON_H

#include <string>

using namespace std;

class Person {
    private:
        double _salary;
        string _name;
    public:
        Person(double salary, string name);

    double getSalary() const;

    void setSalary(double salary);

    const string &getName() const;

    void setName(const string &name);
};


#endif //EJERCICIOS_CPLUSPLUS_PERSON_H
