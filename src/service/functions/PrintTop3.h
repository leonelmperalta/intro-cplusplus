//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_PRINTTOP3_H
#define EJERCICIOS_CPLUSPLUS_PRINTTOP3_H

#include <iostream>
#include "Function.h"

using namespace std;

class PrintTop3 : public Function {
public:
    void exec() override {
        cout << "Enter the numbers you want to sum. When you finish, enter 0." << endl;
        int top1 , top2, top3 = 0;
        int n = -1;
        while(n != 0) {
            cin >> n;
            if(n > top1) {
                top3 = top2;
                top2 = top1;
                top1 = n;
            } else if (n > top2 && n != top1) {
                top3 = top2;
                top2 = n;
            } else if (n > top3 && n != top2) {
                top3 = n;
            }
        }
        cout << "top 1: " << top1 << " ,top 2: " << top2 << " ,top 3: " << top3 << endl;
    }
};


#endif //EJERCICIOS_CPLUSPLUS_PRINTTOP3_H
