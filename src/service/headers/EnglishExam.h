//
// Created by lperalta on 5/9/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_ENGLISHEXAM_H
#define EJERCICIOS_CPLUSPLUS_ENGLISHEXAM_H


#include "../functions/Function.h"

class EnglishExam {
    private:
        int _studentsAmount;
        int _marks[10];
    public:

    EnglishExam();

    void englishExam();

    void printProcessedData();

    void readStudentData();

    void addMark(int mark);

    void addStudentData(int mark);

    double getPercentageOfStudentsForMark(int mark);

    const int *getMarks() const;

    int getStudentsAmount() const;

    void setStudentsAmount(int studentsAmount);

    void incrementStudentsAmount();

    void printPercentageOfStudentsForEachMark();

    void printAmountOfStudentsThatMadeTheExam() const;
};


#endif //EJERCICIOS_CPLUSPLUS_ENGLISHEXAM_H
