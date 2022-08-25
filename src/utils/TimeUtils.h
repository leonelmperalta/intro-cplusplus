//
// Created by Leonel on 20/8/2022.
//

#ifndef EJERCICIOS_CPLUSPLUS_TIMEUTILS_H
#define EJERCICIOS_CPLUSPLUS_TIMEUTILS_H


#include <string>

using namespace std;

class TimeUtils {
    public:
        const static int SECONDS_IN_A_DAY = 86400;
        const static int SECONDS_IN_A_HOUR = 3600;
        const static int SECONDS_IN_A_MINUTE = 60;
        const static int HOURS_IN_A_DAY = 24;
        const static int MINUTES_IN_A_HOUR = 60;
        const static int MINUTES_IN_A_DAY = 1440;

        static string getTimeInDDHHMMSSFromSeconds(long periodInSeconds);
};


#endif //EJERCICIOS_CPLUSPLUS_TIMEUTILS_H
