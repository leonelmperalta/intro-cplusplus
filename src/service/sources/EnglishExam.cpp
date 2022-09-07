//
// Created by lperalta on 5/9/2022.
//

#include <iostream>
#include "../headers/EnglishExam.h"
using namespace std;

EnglishExam::EnglishExam() {
    _studentsAmount = 0;
    for (int i = 0; i < 10; i++) {
        _marks[i] = 0;
    }
}

int EnglishExam::getStudentsAmount() const {
    return _studentsAmount;
}

void EnglishExam::setStudentsAmount(int studentsAmount) {
    _studentsAmount = studentsAmount;
}

void EnglishExam::incrementStudentsAmount(){
    _studentsAmount++;
}

void EnglishExam::addMark(int note) {
    _marks[note - 1]++;
}

void EnglishExam::addStudentData(int note) {
    incrementStudentsAmount();
    addMark(note);
}

void EnglishExam::englishExam() {
    readStudentData();
    printProcessedData();
}

void EnglishExam::readStudentData() {
    bool isEnteringStudents = true;
    int aux;
    int registerNumber;
    int markObtained;
    cout << "For each student you must enter register number and mark obtained in the exam." << endl;
    while(isEnteringStudents) {
        cout << "Enter register number:" << endl;
        cin >> registerNumber;

        cout << "Enter mark obtained:" << endl;
        cin >> markObtained;
        if(markObtained > 10 || markObtained < 1) {
            cout << "Mark must be a number from 1 to 10" << endl;
            cin >> markObtained;
        }
        addStudentData(markObtained);

        cout << "Do you want to enter another student? Enter 1 for yes, 0 for no." << endl;
        cin >> aux;
        isEnteringStudents = aux != 0;
    }
}

void EnglishExam::printProcessedData() {
    printAmountOfStudentsThatMadeTheExam();
    printPercentageOfStudentsForEachMark();
}

void EnglishExam::printAmountOfStudentsThatMadeTheExam() const {
    cout << "Amount of students that made the test: " << getStudentsAmount() << endl;
}

void EnglishExam::printPercentageOfStudentsForEachMark() {
    cout << "Percentage of students that obtained each mark:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "| MARK: " << i + 1 << " | PERCENTAGE: " << getPercentageOfStudentsForMark(i) << " % |" << endl;
    }
}

const int *EnglishExam::getMarks() const {
    return _marks;
}

double EnglishExam::getPercentageOfStudentsForMark(int mark) {
    int totalStudentsWithMarkX = getMarks()[mark];
    return (totalStudentsWithMarkX * 100.0) / getStudentsAmount();
}
