//
// Created by lperalta on 6/9/2022.
//

#include <iostream>
#include "Function.h"
#include "PrintEnteredNumber.h"
#include "PrintBasicOperations.h"
#include "SayHello.h"
#include "SphereFunction.h"
#include "RectangleFunction.h"
#include "CompareNumberWithZero.h"
#include "PrintTheGreater.h"
#include "IsEven.h"
#include "IsDivisible.h"
#include "ChooseBasicOperations.h"
#include "Default.h"
#include "FormatPeriod.h"
#include "PrintListOf20Numbers.h"
#include "FactorialFunction.h"
#include "SerieOfNumbersData.h"
#include "PartialSum.h"
#include "PrintMaxAndMinAndOccurrences.h"
#include "Multiplication.h"
#include "PrintTop3.h"
#include "SalaryFunction.h"
#include "NumbersOrderFunction.h"
#include "CelsiusFahrenheitTable.h"
#include "NumbersLotAverage.h"
#include "PolynomialFunction.h"
#include "IsPrimeNumber.h"
#include "McdMcmFunction.h"
#include "PrimeNumbersFrom2To200.h"
#include "AdditionVectorAndScalarProduct.h"
#include "../headers/EnglishExam.h"
#include "ArrayWithoutOccurrences.h"
#include "EnglishExamFunction.h"
#include "UnionAndIntersection.h"

using namespace std;

Function *Function::getFunction(int function) {
    Function *functionToReturn = new Default;
    switch (function) {
        case 1:
            functionToReturn = new PrintEnteredNumber;
            break;
        case 2:
            functionToReturn = new PrintBasicOperations;
            break;
        case 3:
            functionToReturn = new SayHello;
            break;
        case 4:
            functionToReturn = new SphereFunction;
            break;
        case 5:
            functionToReturn = new RectangleFunction;
            break;
        case 6:
            functionToReturn = new CompareNumberWithZero;
            break;
        case 7:
            functionToReturn = new PrintTheGreater;
            break;
        case 8:
            functionToReturn = new IsEven;
            break;
        case 9:
            functionToReturn = new IsDivisible;
            break;
        case 10:
            functionToReturn = new ChooseBasicOperations;
            break;
        case 11:
            functionToReturn = new Default;
            break;
        case 12:
            functionToReturn = new FormatPeriod;
            break;
        case 13:
            functionToReturn = new PrintListOf20Numbers;
            break;
        case 14:
            functionToReturn = new FactorialFunction;
            break;
        case 15:
            functionToReturn = new PartialSum;
            break;
        case 16:
            functionToReturn = new SerieOfNumbersData;
            break;
        case 17:
            functionToReturn = new PrintMaxAndMinAndOccurrences;
            break;
        case 18:
            functionToReturn = new Multiplication;
            break;
        case 19:
            functionToReturn = new PrintTop3;
            break;
        case 20:
            functionToReturn = new SalaryFunction;
            break;
        case 21:
            functionToReturn = new NumbersOrderFunction;
            break;
        case 22:
            functionToReturn = new CelsiusFahrenheitTable;
            break;
        case 23:
            functionToReturn = new NumbersLotAverage;
            break;
        case 24:
            functionToReturn = new PolynomialFunction;
            break;
        case 27:
            functionToReturn = new IsPrimeNumber;
            break;
        case 28:
            functionToReturn = new McdMcmFunction;
            break;
        case 29:
            functionToReturn = new PrimeNumbersFrom2To200;
            break;
        case 30:
            functionToReturn = new AdditionVectorAndScalarProduct;
            break;
        case 31:
            functionToReturn = new EnglishExamFunction;
            break;
        case 32:
            functionToReturn = new ArrayWithoutOccurrences;
            break;
        case 33:
            functionToReturn = new UnionAndIntersection();
        default:
            cout << "The chosen function number: " << function << " is not implemented yet." << endl;
            break;
    }
    return functionToReturn;
}
