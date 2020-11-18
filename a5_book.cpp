#include "a5_book.hpp"
#include <iostream>
using namespace std;

// book constructor definitions
Book::Book() :
    title("n/a"), authors("n/a"), dop("n/a") {}

Book::Book(string new_title) :
    title(new_title), authors("n/a"), dop("n/a") {}

Book::Book(string new_title, string new_authors) :
    title(new_title), authors(new_authors), dop("n/a") {}

Book::Book(string new_title, string new_authors, string new_dop) :
    title(new_title), authors(new_authors), dop(new_dop) {}

// book getters definition 
string Book::get_book_title() {
    return title;
}

string Book::get_book_authors() {
    return authors;
}

string Book::get_book_dop() {
    return dop;
}


// book service method definition
void Book::print() {
    // output the book info to console
    cout << "The book title is: " << title << endl;
    cout << "The book authors is/are: " << authors << endl;
    cout << "The book date of publication is: " << dop << endl;
    cout << endl;
}
