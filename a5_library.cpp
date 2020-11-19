//***********************************************************
// Student Names: Nicolas Palmar and Kevin Wang
// Student Number: 
//
// SYDE 121 Lab: Home Assignment: 5
// Filename: a5_library
// We hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others
//
// Project: Book and Library Classes
// Purpose: Creates a Library class that contains a vector of Book instances
// Due Date: Friday, November 20, 2020
//**************************************************************

#include "a5_library.hpp"
#include <iostream>
using namespace std;

Library::Library() {}

Library::Library(vector<Book> new_book_list) :
    book_list(new_book_list.begin(), new_book_list.end()) {
}

void Library::print() {
    // loop through all books
    for (int index = 0; index < book_list.size(); index++) {
        // call the book print method a book in the library
        book_list[index].print();
    }

}

bool Library::insert_book(Book new_book) {
    // declare and initialize variables
    bool same_authors, same_title, same_dop;

    // loop through each book in the library
    for (Book current_book : book_list) {
        // check if repeated
        same_title = current_book.get_book_title() == new_book.get_book_title();
        same_authors = current_book.get_book_authors() == new_book.get_book_authors();
        same_dop = current_book.get_book_dop() == new_book.get_book_dop();

        if (same_title && same_authors && same_dop) {
            // do nothing if the same book is in the library; return false
            return false;
        }
    }

    // the book is not in the library; insert it and return true
    book_list.push_back(new_book);
    return true;
}


bool Library::insert_book(string new_title, string new_authors, string new_dop) {
    // declare and initialize variables
    bool same_authors, same_title, same_dop;

    // create a new book object
    Book new_book(new_title, new_authors, new_dop);

    // loop through each book in the library
    for (Book current_book : book_list) {
        // check if repeated
        same_title = current_book.get_book_title() == new_title;
        same_authors = current_book.get_book_authors() == new_authors;
        same_dop = current_book.get_book_dop() == new_dop;

        if (same_title && same_authors && same_dop) {
            // do nothing if the same book is in the library; return false
            return false;
        }
    }

    // the book is not in the library; insert it and return true
    book_list.push_back(new_book);
    return true;

}

bool Library::remove_book(Book searched_book) {
    // declare and initialize variables
    int index = 0;
    bool same_authors, same_title, same_dop;

    // loop through each book in the library
    for (Book current_book : book_list) {
        // check if repeated
        same_title = current_book.get_book_title() == searched_book.get_book_title();
        same_authors = current_book.get_book_authors() == searched_book.get_book_authors();
        same_dop = current_book.get_book_dop() == searched_book.get_book_dop();

        if (same_title && same_authors && same_dop) {
            // the searched book is the same as a book in the library; remove the book from the list and return true
            book_list.erase(book_list.begin() + index);
            return true;
        }
        index ++;
    }

    // the searched book for removal is not in the library; return false
    return false;
}


bool Library::remove_book(string searched_title, string searched_authors, string searched_dop) {
    // declare and initialize variables
    int index = 0;
    bool same_authors, same_title, same_dop;

    // create a new book object
    Book searched_book(searched_title, searched_authors, searched_dop);

    // loop through each book in the library
    for (Book current_book : book_list) {
        // check if repeated
        same_title = current_book.get_book_title() == searched_title;
        same_authors = current_book.get_book_authors() == searched_authors;
        same_dop = current_book.get_book_dop() == searched_dop;

        if (same_title && same_authors && same_dop) {
            // the searched book is the same as a book in the library; remove the book from the list and return true
            book_list.erase(book_list.begin() + index);
            return true;
        }
        index ++;
    }

    // the searched book for removal is not in the library; return false
    return false;
}

