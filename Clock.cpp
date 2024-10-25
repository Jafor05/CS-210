// Clock.cpp
// Author: Jafor Ahmed
// Date: 2024-09-18
// Description: Source file for Clock class.

#include "Clock.h"
#include <iostream>

Clock::Clock(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

void Clock::setTime(int h, int m, int s) {
    hours = h;
    minutes = m;
    seconds = s;
}
