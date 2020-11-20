//***********************************************************
// Student Names: Nicolas Palmar and Kevin Wang
// Student Number: 20883350 and 20886511
//
// SYDE 121 Lab: Classes, OO Design Assignment: 5
// Filename: a5_books.hpp
// We hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others
//
// Project: Book and Library Classes
// Purpose: Declare methods for the book class to create, store, and show books
// Due Date: Friday, November 20, 2020
//**************************************************************

#ifndef A5_BOOKS_HPP
#define A5_BOOKS_HPP
#include <string>
using namespace std;

// PURPOSE: Models a book for reading
class Book {
    // attributes
    string title, authors, dop;

    // public methods of book class
public:
    // constructors
    Book();
    Book(string new_title);
    Book(string new_title, string new_authors);
    Book(string new_title, string new_authors, string new_dop);
    // PURPOSE: initialize book objects. Note: this documentation applies to the 4 constructors above
    //      INPUTS: new_title - string referring to the book name (if applicable)
    //               new_authors - string referring to the names of the author(s) of the book (if applicable)
    //             new_dop - string referring to the date of publication (if applicable)
    //      OUTPUTS: none; constructors

    // getters
    string get_book_title();
    // PURPOSE: gets the book title value
    //      INPUTS: nothing
    //      OUTPUTS: title - string referring to the title of the book object

    string get_book_authors();
    // PURPOSE: gets the book authors value
    //      INPUTS: nothing
    //      OUTPUTS: authors - string referring to the authors of the book object

    string get_book_dop();
    // PURPOSE: gets the book date of publication value
    //      INPUTS: nothing
    //      OUTPUTS: dop - string referring to the date of publication of the book object

    // service methods
    void print();
    // PURPOSE: output the title, author names, and date of publication to the console
    //     INPUTS: none
    //     OUTPUTS: none; output to console

};
#endif


