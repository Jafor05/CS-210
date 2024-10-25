// TwelveHourClock.h
// Author: Jafor Ahmed
// Date: 2024-09-18
// Description: Header file for Clock class.

#ifndef TWELVEHOURCLOCK_H
#define TWELVEHOURCLOCK_H

#include "Clock.h"

class TwelveHourClock : public Clock {
public:
    TwelveHourClock(int h = 0, int m = 0, int s = 0);
    void displayTime() const override;
};

#endif

