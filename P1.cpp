//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"

using namespace std;


int main(){
    Library library;
    
    //ask for commands and execute
    string command;
    string bookName;
    while(command != "quit"){
        cout << "Enter command: ";
        cin >> command;
        if(command == "add"){
            cin >> bookName;
            if(library.addBook(bookName)){
                cout << "Book added" << endl;
            }
            else{
                cout << "Book not added" << endl;
            }
        }
        else if(command == "remove"){
            cin >> bookName;
            if(library.removeBook(bookName)){
                cout << "Book removed" << endl;
            }
            else{
                cout << "Book not removed" << endl;
            }
        }
        else if(command == "print"){
            library.print();
        }
        else if(command == "quit"){
            cout << "Good bye" << endl;
        }
        else{
            cout << "Invalid command" << endl;
        }
    }

    

}
