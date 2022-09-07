//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ISEVEN_H
#define EJERCICIOS_CPLUSPLUS_ISEVEN_H


class IsEven : public Function {
    public:
        void exec() override {
            int number;
            bool isEven;
            cout << "Enter a number: " << endl;
            cin >> number;
            isEven = (number % 2) == 0;
            cout << "The number that you have entered is: " << ( isEven ? "EVEN." : "ODD.") << endl;
        }
};


#endif //EJERCICIOS_CPLUSPLUS_ISEVEN_H
