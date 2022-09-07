//
// Created by lperalta on 7/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ENGLISHEXAMFUNCTION_H
#define EJERCICIOS_CPLUSPLUS_ENGLISHEXAMFUNCTION_H

#include "Function.h"
#include "../headers/EnglishExam.h"

using namespace std;
/**
 * This function will read register number of the students and mark obtained in the exam
 * and will print the amount of students that made the exam and for each mark, how many
 * students obtained that mark
 */
class EnglishExamFunction : public Function {
public:
    void exec() override {
        auto *engExam = new EnglishExam();
        engExam->englishExam();
    }
};


#endif //EJERCICIOS_CPLUSPLUS_ENGLISHEXAMFUNCTION_H
