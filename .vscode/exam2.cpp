#include "Time.h"

#include <iostream>

using namespace std;

int main()
{
    // Time class
    cout << "--- Testing Time Class ---" << endl;

    Time defaultTime;

    cout << "Default Time:" << endl;
    cout << "Standard: ";
    defaultTime.printStandard();

    cout << "Military: ";
    defaultTime.printMilitary();

    cout << endl;


    Time customTime(14, 45, 15);

    cout << "Custom Time:" << endl;
    cout << "Standard: ";
    customTime.printStandard();

    cout << "Military: ";
    customTime.printMilitary();

    cout << endl;

}