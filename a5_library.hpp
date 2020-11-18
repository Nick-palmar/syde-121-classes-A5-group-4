#ifndef LIBRARY
#define LIBRARY
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

    // service methods
    void print();
    bool insert_book(Book new_book);
    bool insert_book(string new_title, string new_authors, string new_dop);

};
#endif

