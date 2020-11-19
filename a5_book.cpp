//***********************************************************
// Student Names: Nicolas Palmar and Kevin Wang
// Student Number: 
//
// SYDE 121 Lab: Home Assignment: 5
// Filename: a5_book
// We hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others
//
// Project: Book and Library Classes
// Purpose: Creates a Book class that stores individual books
// Due Date: Friday, November 20, 2020
//**************************************************************

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
