#include <iostream>
#include "src/service/Sphere.h"
#include "src/service/BasicOperationsPrinter.h"
#include "src/service/Rectangle.h"
#include "src/service/BasicCalculator.h"
#include "src/utils/TimeUtils.h"
#include "src/service/Factorial.h"
#include "src/utils/ArrayUtils.h"

using namespace std;


void readNumberAndPrint();

void readTwoNumbersAndPrintAllBasicOperationsBetweenThem();

void readNameAndSayHello();

void readCircleRadioAndPrintSurfaceAndVolume();

void readBaseAndHeightAndPrintPerimeterAndSurface();

void readNumberAndPrintTheComparisonWithZero();

void readTwoNumbersAndPrintTheGreater();

void readNumberAndPrintIfItsEven();

void readTwoNumbersAndPrintIfTheFirstIsDivisibleByTheSecond();

void basicCalculator();

void readAPeriodInSecondsAndPrintItInFormatDDHHMMSS();

void printListOf20ConsecutiveNumbersStartingWithInputFromConsole();

void readNumberAndPrintFactorial();

void readNumbersAndPrintThePartialSum();

void readNumbersAndPrintMaxAndMin();

void readXNumbersPrintMaxMinAndOccurrences();

void readNumbersAndPrintMultiplication();

void readNumbersAndGetTop3();

int main() {
    //readNumberAndPrint();
    //readTwoNumbersAndPrintAllBasicOperationsBetweenThem();
    //readNameAndSayHello();
    //readCircleRadioAndPrintSurfaceAndVolume();
    //readBaseAndHeightAndPrintPerimeterAndSurface();
    //readNumberAndPrintTheComparisonWithZero();
    //readTwoNumbersAndPrintTheGreater();
    //readNumberAndPrintIfItsEven();
    //readTwoNumbersAndPrintIfTheFirstIsDivisibleByTheSecond();
    //basicCalculator();
    //readAPeriodInSecondsAndPrintItInFormatDDHHMMSS();
    //printListOf20ConsecutiveNumbersStartingWithInputFromConsole();
    //readNumberAndPrintFactorial();
    //readNumbersAndPrintThePartialSum();
    //readNumbersAndPrintMaxAndMin();
    //readXNumbersPrintMaxMinAndOccurrences();
    // readNumbersAndPrintMultiplication();
    readNumbersAndGetTop3();
    return 0;
}

void readNumbersAndGetTop3() {
    cout << "Enter the numbers you want to sum. When you finish, enter 0." << endl;
    int n;
    int top1 = 0;
    int top2 = 0;
    int top3 = 0;
    bool isEnteringNumbers = true;
    bool isFirstNumber = true;
    while(isEnteringNumbers) {
        cin >> n;
    }
}

void readNumbersAndPrintMultiplication() {
    int A;
    int B;
    int multiplication = 0;
    cout << "Enter two numbers: " << endl;
    cin >> A;
    cin >> B;
    for (int i = 0; i < B; ++i) {
        multiplication += A;
    }
    cout << "Result : " << multiplication;
}

void readXNumbersPrintMaxMinAndOccurrences() {
    int arrayLength;
    int max, min;
    cout << "Enter the amount of numbers to process: " << endl;
    cin >> arrayLength;
    int numbers[arrayLength];
    cout << "Enter the numbers: " << endl;
    for(int i = 0; i < arrayLength; i++) {
        cin >> numbers[i];
    }
    max = ArrayUtils::maxElement(numbers, arrayLength);
    min = ArrayUtils::minElement(numbers, arrayLength);
    cout << "Max: " << max << ", occurrences: " << ArrayUtils::occurrencesOfInt(numbers, arrayLength, max) << endl;
    cout << "Min: " << min << ", occurrences: " << ArrayUtils::occurrencesOfInt(numbers, arrayLength, min) << endl;
}

void readNumbersAndPrintMaxAndMin() {
    int n = -1;
    int max;
    int min;
    int posMax;
    int posMin;
    int posCounter = 1;
    bool isFirstNumber = true;
    bool isEnteringNumbers = true;
    while (isEnteringNumbers) {
        cout << "Enter a a number: " << endl;
        cin >> n;
        if(isFirstNumber) {
            max = n;
            min = n;
            posMax = posCounter;
            posMin = posCounter;
            isFirstNumber = false;
        } else {
            bool isMax = n > max;
            bool isMin = n < min;
            max = isMax ? n : max;
            min = isMin ? n : min;
            posMax = isMax ? posCounter : posMax;
            posMin = isMin ? posCounter : posMin;
        }
        cout << "Do you want to enter another number? Enter 1 for yes, 0 for no." << endl;
        cin >> n;
        isEnteringNumbers = n == 1;
        posCounter ++;
    }
    cout << "Max: " << max << ", pos: " << posMax << endl;
    cout << "Min: " << min << ", pos: " << posMin << endl;
}

void readNumbersAndPrintThePartialSum() {
    cout << "Enter the numbers you want to sum. When you finish, enter 0." << endl;
    int n = -1;
    int sum = 0;
    while(n != 0) {
       cin >> n;
       sum += n;
       cout << sum;
    }
    cout << "The sum of the numbers entered is: " << sum << endl;
}

void readNumberAndPrintFactorial() {
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    cout << "The factorial of the number entered is: " << Factorial::getFactorial(number) << endl;
}

void printListOf20ConsecutiveNumbersStartingWithInputFromConsole() {
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    for (int i = ++number; i < (number + 20); i++) {
        cout << i << endl;
    }
}

void readAPeriodInSecondsAndPrintItInFormatDDHHMMSS() {
    int period;
    cout << "Enter the period: " << endl;
    cin >> period;
    cout << TimeUtils::getTimeInDDHHMMSSFromSeconds(period) << endl;
}

void basicCalculator() {
    int fst;
    int snd;
    string operation;
    cout << "Enter the first number: " << endl;
    cin >> fst;
    cout << "Enter the second number: " << endl;
    cin >> snd;
    cout << "Enter the operation to make. Valid operations are: '+, -, *, or :' " << endl;
    cin >> operation;
    auto *calculator = new BasicCalculator(fst, snd, operation);
    calculator->printResultOfOperation();
}

void readTwoNumbersAndPrintIfTheFirstIsDivisibleByTheSecond() {
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

void readNumberAndPrintIfItsEven() {
    int number;
    bool isEven;
    cout << "Enter a number: " << endl;
    cin >> number;
    isEven = (number % 2) == 0;
    cout << "The number that you have entered is: " << ( isEven ? "EVEN." : "ODD.") << endl;
}

void readTwoNumbersAndPrintTheGreater() {
    double fst;
    double snd;
    cout << "Enter the first real number: " << endl;
    cin >> fst;
    cout << "Enter the second real number: " << endl;
    cin >> snd;
    cout << "The greatest number is: " << (fst > snd ? fst : snd);
}

void readNumberAndPrintTheComparisonWithZero() {
    double number;
    string comparison;
    cout << "Enter a real number: " << endl;
    cin >> number;
    if (number > 0) {
        comparison = "GREATER THAN";
    } else if (number < 0) {
        comparison = "LESS THAN";
    } else {
        comparison = "EQUAL TO";
    }
    cout << "The number that you have entered is " << comparison << " zero." << endl;
}

void readBaseAndHeightAndPrintPerimeterAndSurface() {
    double base;
    double height;
    Rectangle *rectangle;
    cout << "Enter rectangle base: " << endl;
    cin >> base;
    cout << "Enter rectangle height: " << endl;
    cin >> height;
    rectangle = new Rectangle(base, height);
    cout << "Rectangle perimeter is: " << rectangle->getPerimeter() << endl;
    cout << "Rectangle surface is: " << rectangle->getSurface() << endl;
}

void readNumberAndPrint() {
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout << "The number entered is: " << n << endl;
}

void readCircleRadioAndPrintSurfaceAndVolume() {
    double radio;
    cout << "Enter the sphere radio: " << endl;
    cin >> radio;
    auto *sphere = new Sphere(radio);
    cout << "The sphere volume is: " << sphere->getSurface() << endl;
    cout << "The sphere surface is: " << sphere->getVolume() << endl;
}



void readTwoNumbersAndPrintAllBasicOperationsBetweenThem() {
    int firstNumber;
    int secondNumber;
    cout << "Enter the first number: " << endl;
    cin >> firstNumber;
    cout << "Enter the second number: " << endl;
    cin >> secondNumber;
    auto *basicOperationsPrinter = new BasicOperationsPrinter(firstNumber, secondNumber);
    basicOperationsPrinter->printAllBasicOperations();
}

void readNameAndSayHello() {
    char name[50];
    cout << "Please, enter your name: " << endl;
    cin >> name;
    cout << "Hello " << name << "!" << endl;
}
