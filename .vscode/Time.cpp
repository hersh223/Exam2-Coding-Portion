#include "Time.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

Time::Time() : hours(0), minutes(0), seconds(0) {}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

Time::~Time() {}

int Time::getHours() const {
    return hours;
}

int Time::getMinutes() const {
    return minutes;
}

int Time::getSeconds() const {
    return seconds;
}

void Time::setHours(int h) {
    hours = h;
}

void Time::setMinutes(int m) {
    minutes = m;
}

void Time::setSeconds(int s) {
    seconds = s;
}

void Time::printStandard()const{
    int standardHour;
    string period;

    if (hours == 0)
    {
        standardHour = 12;
        period = "AM";
    }
    else if (hours < 12)
    {
        standardHour = hours;
        period = "AM";
    }
    else if (hours == 12)
    {
        standardHour = 12;
        period = "PM";
    }
    else
    {
        standardHour = hours - 12;
        period = "PM";
    }

    cout << setfill('0')
         << setw(2) << standardHour << ":"
         << setw(2) << minutes << ":"
         << setw(2) << seconds << " "
         << period << endl;
}

void Time::printMilitary() const
{
    cout << setfill('0')
         << setw(2) << hours << ":"
         << setw(2) << minutes << ":"
         << setw(2) << seconds << endl;
}