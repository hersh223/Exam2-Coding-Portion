#include "Book.h"

Book::Book(string t, string a, string isbn, int p):ISBN(isbn){
    title = t;
    author = a;
    pages = p;

    }


    double Book::getReadingTime() const{
        return (pages *2 / 60.0);
    }

    string Book::getCitation() const{
       return title + " by " + author;
    }

    string Book::openToBookmark() const
{
    return "The book opens to a dog-eared page in the middle of chapter 4.";
}
string Book::closeBook() const
{
    return "The book closes and is placed back on the shelf.";
}