//***********************************************************
// Student Names: Nicolas Palmar and Kevin Wang
// Student Number: 20883350 and 20886511
//
// SYDE 121 Lab: Classes, OO Design Assignment: 5
// Filename: a5_library.hpp
// We hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others
//
// Project: Book and Library Classes
// Purpose: Declare methods for the library class which will store books
// Due Date: Friday, November 20, 2020
//**************************************************************

#ifndef A5_LIBRARY_HPP
#define A5_LIBRARY_HPP
#include <vector>
#include "a5_book.hpp"
using namespace std;

// PURPOSE: Models a library which stores books
class Library {
    // atttributes
    vector<Book> book_list;

public:
    // constructors
    Library();
    Library(vector<Book> new_book_list);
    // PURPOSE: initialize library. Note: this documentation applies to the 2 constructors above
    //      INPUTS: new_book_list - vector containing book objects (if applicable)
    //      OUTPUTS: none; constructors

    // service methods
    void print();
    // PURPOSE: output the books objects in the library
    //     INPUTS: none
    //     OUTPUTS: none; output to console

    bool insert_book(Book new_book);
    // PURPOSE: checks if the book object already exists in the library
    //     INPUTS: new_book - book object that is being attemped to insert
    //     OUTPUTS: a boolean value; true if the book is not in the library and is able to be inserted otherwise false

    bool insert_book(string new_title, string new_authors, string new_dop);
    // PURPOSE: checks if the book of string values already exists in the library
    //     INPUTS: new_title - string referring to the title of the book object that is being attemped to insert
    //             new_authors - string referring to the authors of the book object that is being attemped to insert
    //             new_dop - string referring to the date of publication of the book object that is being attemped to insert
    //     OUTPUTS: a boolean value; true if the book is not in the library and is able to be inserted otherwise false

    bool remove_book(Book new_book);
    // PURPOSE: checks if the book object exists in the library
    //     INPUTS: new_book - book object that is being attemped to remove
    //     OUTPUTS: a boolean value; true if the book is in the library and is able to be removed otherwise false

    bool remove_book(string new_title, string new_authors, string new_dop);
    // PURPOSE: checks if the book of string values exists in the library
    //     INPUTS: new_title - string referring to the title of the book object that is being attemped to remove
    //             new_authors - string referring to the authors of the book object that is being attemped to remove
    //             new_dop - string referring to the date of publication of the book object that is being attemped to remove
    //     OUTPUTS: a boolean value; true if the book is in the library and is able to be removed otherwise false

};
#endif
