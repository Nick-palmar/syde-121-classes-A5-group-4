#include "a5_library.hpp"
#include <iostream>
using namespace std;

Library::Library() : book_list(1) {}

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
    bool is_repeated = false;
    bool same_authors, same_title, same_dop;

    // loop through each book in the library
    for (Book current_book : book_list) {
        // check if repeated
        same_authors = current_book.get_book_authors() == new_book.get_book_authors();
        same_title = current_book.get_book_title() == new_book.get_book_title();
        same_dop = current_book.get_book_dop() == new_book.get_book_dop();

        if (same_authors && same_title && same_dop) {
            // do nothing if the same book is in the library; return false
            return false;
        } 
    }

    // the book is not in the library; insert it an return true
    book_list.push_back(new_book);
    return true;
}


bool Library::insert_book(string new_title, string new_authors, string new_dop) {
    // declare and initialize variables
    bool is_repeated = false;
    bool same_authors, same_title, same_dop;

    // create a new book object
    Book new_book(new_title, new_authors, new_dop);

    // loop through each book in the library
    for (Book current_book : book_list) {
        // check if repeated
        same_authors = current_book.get_book_authors() == new_book.get_book_authors();
        same_title = current_book.get_book_title() == new_book.get_book_title();
        same_dop = current_book.get_book_dop() == new_book.get_book_dop();

        if (same_authors && same_title && same_dop) {
            // do nothing if the same book is in the library; return false
            return false;
        }
    }

    // the book is not in the library; insert it an return true
    book_list.push_back(new_book);
    return true;

}


