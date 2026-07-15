#include "Time.h"
#include "Book.h"
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

    // Book Test
    cout << "--- Testing Book Class ---" << endl;

     Book book("The Cat In The Hat", "Dr. Seuss", "978-0-394-80001-1", 61);

     cout << "Citation: " << book.getCitation() << endl;
        cout << "Estimated Reading Time: " << book.getReadingTime() << " hours" << endl;
        cout << book.openToBookmark() << endl;
        cout << book.closeBook() << endl;
        return 0;

}

