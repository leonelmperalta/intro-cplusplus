//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ISDIVISIBLE_H
#define EJERCICIOS_CPLUSPLUS_ISDIVISIBLE_H


class IsDivisible : public Function {
public:
    void exec() override {
        int fst;
        int snd;
        bool isDivisible;
        cout << "Enter the first number: " << endl;
        cin >> fst;
        cout << "Enter the second number: " << endl;
        cin >> snd;
        isDivisible = fst % snd == 0;
        cout << "The number " << fst << " that you have entered is: " << (isDivisible ? "DIVISIBLE" : "NOT DIVISIBLE") << " by " << snd << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_ISDIVISIBLE_H
