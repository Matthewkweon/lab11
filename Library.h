#ifndef _LIBRARY_H
#define _LIBRARY_H 1

#include <string>
using namespace std;


//DO NOT CHANGE THIS FILE


class Library{
public:
    //constructor
    //creates a library with no books
    Library();

    //Adds the given book to the library and returns zero
    //returns false if the book already exists or if the library
    //  already has 10 books
    bool addBook(string bookName);

    //Removes the given book name from the library by setting the 
    //  corresponding string to "", and returns true
    //returns false if the library does not have the given book
    bool removeBook(string bookName);

    //prints the book names
    void print();

private:
    string books[10]; //book names. (by default, all are initialized with "")
};

#endif