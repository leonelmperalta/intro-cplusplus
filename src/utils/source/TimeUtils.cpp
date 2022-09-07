//
// Created by Leonel on 20/8/2022.
//

#include <sstream>
#include "../headers/TimeUtils.h"

string TimeUtils::getTimeInDDHHMMSSFromSeconds(long periodInSeconds) {
    ostringstream output;
    auto days = (int) (periodInSeconds / SECONDS_IN_A_DAY);
    auto hours = (int) ((periodInSeconds / SECONDS_IN_A_HOUR) - (days * HOURS_IN_A_DAY ));
    auto minutes = (int) ((periodInSeconds / SECONDS_IN_A_MINUTE) - (days * MINUTES_IN_A_DAY) - (hours * MINUTES_IN_A_HOUR));
    auto seconds = (int) ((periodInSeconds) - (days * SECONDS_IN_A_DAY) - (hours * SECONDS_IN_A_HOUR) - (minutes * SECONDS_IN_A_MINUTE));
    output << "Days: " << days << ", hours: " << hours << ", minutes: " << minutes << ", seconds: " << seconds;
    return output.str();
}
