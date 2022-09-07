//
// Created by lperalta on 6/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_FUNCTION_H
#define EJERCICIOS_CPLUSPLUS_FUNCTION_H


class Function {
    public:
        static Function *getFunction(int function);
        virtual void exec() = 0;
};


#endif //EJERCICIOS_CPLUSPLUS_FUNCTION_H
