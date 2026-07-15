#ifndef Book_h
#define Book_h

#include <string>

using namespace std;

class Book
{
    private:
        string title;
        string author;
        int pages;
        const string IBSN;

    public: Book(string t, string a, string isbn, int p);

    double getReadingTime() const;

    string getCitation() const;

    string openToBookmark() const;
    string closeBook() const;
};
#endif