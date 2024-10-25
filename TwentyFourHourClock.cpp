// TwentyFourHourClock.cpp
// Author: Jafor Ahmed
// Date: 2024-09-18
// Description: Source file for Clock class.

#include "TwentyFourHourClock.h"
#include <iostream>
#include <iomanip>

TwentyFourHourClock::TwentyFourHourClock(int h, int m, int s) : Clock(h, m, s) {}

void TwentyFourHourClock::displayTime() const {
    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
        << std::setfill('0') << std::setw(2) << minutes << ":"
        << std::setfill('0') << std::setw(2) << seconds << std::endl;
}
