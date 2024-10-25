// Clock.h
// Author: Jafor Ahmed
// Date: 2024-09-18
// Description: Header file for Clock class.

#ifndef CLOCK_H
#define CLOCK_H

class Clock {
protected:
    int hours;
    int minutes;
    int seconds;

public:
    Clock(int h = 0, int m = 0, int s = 0);
    virtual void displayTime() const = 0; // Pure virtual function
    void setTime(int h, int m, int s);
};

#endif
#pragma once
