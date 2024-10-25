// TwelveHourClock.cpp
// Author: Jafor Ahmed
// Date: 2024-09-18
// Description: Source file for Clock class.

#include "TwelveHourClock.h"
#include <iostream>
#include <iomanip>

TwelveHourClock::TwelveHourClock(int h, int m, int s) : Clock(h, m, s) {}

void TwelveHourClock::displayTime() const {
    int displayHour = hours % 12;
    displayHour = (displayHour == 0) ? 12 : displayHour; // Adjust for 12-hour format
    std::cout << std::setfill('0') << std::setw(2) << displayHour << ":"
        << std::setfill('0') << std::setw(2) << minutes << ":"
        << std::setfill('0') << std::setw(2) << seconds
        << (hours >= 12 ? " PM" : " AM") << std::endl;
}
