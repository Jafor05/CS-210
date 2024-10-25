// TwentyFourHourClock.h
// Author: Jafor Ahmed
// Date: 2024-09-18
// Description: Header file for Clock class.

#ifndef TWENTYFOURHOURCLOCK_H
#define TWENTYFOURHOURCLOCK_H

#include "Clock.h"

class TwentyFourHourClock : public Clock {
public:
    TwentyFourHourClock(int h = 0, int m = 0, int s = 0);
    void displayTime() const override;
};

#endif

