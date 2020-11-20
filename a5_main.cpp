//***********************************************************
// Student Names: Nicolas Palmar and Kevin Wang
// Student Number:
//
// SYDE 121 Lab: Home Assignment: 5
// Filename: a5_main
// We hereby declare that this code, submitted for credit for the course
// SYDE121, is a product of my own efforts.  This coded solution has
// not been plagiarized from other sources and has not been knowingly
// plagiarized by others
//
// Project: Book and Library Classes
// Purpose: Create a library that contains several books, and can insert, remove, or display books
// Due Date: Friday, November 20, 2020
//**************************************************************

#include <iostream>
#include "a5_book.hpp"
#include "a5_library.hpp"
#include <vector>
using namespace std;

void test_book_constructor();
// PURPOSE: Creates book objects with the four different constructors
//     INPUTS: nothing
//     OUTPUTS: nothing

void test_library_constructor();
// PURPOSE: Creates libraries to contain a vector of book objects
//     INPUTS: nothing
//     OUTPUTS: nothing

void check_insertion_list(vector<bool> insert_list);
// PURPOSE: Checks if the insertion of the books completed or failed
//     INPUTS: insert_list - a vector containing all the books that are being attempted to insert
//     OUTPUTS: nothing; output is to console

void test_book_insertion();
// PURPOSE: Tests simple insertion of book objects into a library
//     INPUTS: nothing
//     OUTPUTS: nothing

void test_book_string_insertion();
// PURPOSE: Tests simple insertion using string values (title, author, dop) for a book into a library
//     INPUTS: nothing
//     OUTPUTS: nothing

void test_repeated_insertion();
// PURPOSE: Tests the insertion of repeated book objects and string values into a library and checks for correct/invalid insertion
//     INPUTS: nothing
//     OUTPUTS: nothing

void check_removal_list(vector<bool> remove_list);
// PURPOSE: Checks if the removal of the books completed or failed
//     INPUTS: insert_list - a vector containing all the books that are being attempted to remove
//     OUTPUTS: nothing; output is to console

void test_book_removal();
// PURPOSE: Tests simple removal of book objects from a library
//     INPUTS: nothing
//     OUTPUTS: nothing

void test_book_string_removal();
// PURPOSE: Tests simple removal using string values (title, author, dop) for a book from a library
//     INPUTS: nothing
//     OUTPUTS: nothing

void test_nonexistant_removal();
// PURPOSE: Tests the removal of book objects and string values that are not found in the library and checks for correct/invalid removals
//     INPUTS: nothing
//     OUTPUTS: nothing

void test_book_constructor() {
    // create 4 books with each constructor
    Book book_1;
    Book book_2("Hamlet");
    Book book_3("Maze Runner", "James Dashner");
    Book book_4("I'm Number 4", "Pittacus Lore", "January 4th 2015");

    // call book service method to check values
    cout << "BOOK CHECK 1: Should print book 1 (no info)" << endl;
    book_1.print();
    cout << "BOOK CHECK 2: Should print book 2 (\"Hamlet\")" << endl;
    book_2.print();
    cout << "BOOK CHECK 3: Should print book 3 (\"Maze Runner\")" << endl;
    book_3.print();
    cout << "BOOK CHECK 4: Should print book 4 (\"I'm Number 4\")" << endl;
    book_4.print();
}


void check_insertion_list(vector<bool> insert_list) {
    // check insertions to see which have failed
    for (int i = 0; i < insert_list.size(); i++) {
        // output to console
        cout << "Insertion " << (i + 1) << ": " << (insert_list[i] ? "true" : "false") << endl;
    }
    cout << endl;
}


void test_library_constructor() {
    // create books with each constructor
    Book book_1;
    Book book_2("Hamlet");
    Book book_3("Maze Runner", "James Dashner");
    Book book_4("I'm Number 4", "Pittacus Lore", "January 4th 2015");
    Book book_5("Hunger Games", "Suzan Collins", "January 4th 2015");
    Book book_6("I, Robot", "Isaac Asimov", "July 7th 2007");
    Book book_7("The Rule of 3", "Eric Walters", "November 7th 2002");

    // make a book vector
    vector<Book> book_list = { book_1, book_2, book_3, book_4 };
    vector<Book> book_list_2 = { book_5, book_6, book_7 };

    // create 3 libraries
    Library lib_1;
    Library lib_2(book_list);
    Library lib_3(book_list_2);

    // call library service method to check values
    cout << "LIBRARY CHECK 1: Should print nothing" << endl;
    lib_1.print();
    cout << "\n";
    cout << "LIBRARY CHECK 2: Should print books 1-4 (no info, \"Hamlet\", \"Maze Runner\", \"I'm Number 4\")" << endl;
    lib_2.print();
    cout << "LIBRARY CHECK 3: Should print books 5-7 (\"Hunger Games\", \"I, Robot\", \"The Rule of 3\")" << endl;
    lib_3.print();
}

void test_book_insertion() {
    // create 4 books with each constructor
    Book book_1;
    Book book_2("Hamlet");
    Book book_3("Maze Runner", "James Dashner");
    Book book_4("I'm Number 4", "Pittacus Lore", "January 4th 2015");

    // create 1 library
    Library lib_1;

    // insert books
    lib_1.insert_book(book_1);
    lib_1.insert_book(book_2);

    // check values
    cout << "BOOK OBJECT INSERTION CHECK 1: Should print books 1-2 (no info, \"Hamlet\")" << endl;
    lib_1.print();

    // insert books
    lib_1.insert_book(book_3);
    lib_1.insert_book(book_4);

    // check values
    cout << "BOOK OBJECT INSERTION CHECK 2: Should print books 1-4 (no info, \"Hamlet\", \"Maze Runner\", \"I'm Number 4\")" << endl;
    lib_1.print();
}

void test_book_string_insertion() {
    // create 2 libraries
    Library lib_1;
    Library lib_2;

    // insert books as strings into the libraries
    lib_1.insert_book("The Elegant Universe", "Brian Greene", "October 3 2009");
    lib_1.insert_book("Catching Fire", "Suzan Collins", "January 4th 2015");

    // check values
    cout << "BOOK STRING INSERTION CHECK 1: Should print \"The Elegant Universe\" and \"Catching Fire\"" << endl;
    lib_1.print();

    // insert into a different library
    lib_2.insert_book("Eyes of Minds", "James Dashner", "November 3 2009");
    
    // check values
    cout << "BOOK STRING INSERTION CHECK 2: Should print \"Eyes of Minds\"" << endl;
    lib_2.print();
}

void test_repeated_insertion() {
    // define an insert list vector
    vector<bool> insert_list;

    // create books
    Book book_1;
    Book book_2("Hamlet");
    Book book_3("Maze Runner", "James Dashner");
    Book book_4("I'm Number 4", "Pittacus Lore", "January 4th 2015");
    Book book_5("Hunger Games", "Suzan Collins", "January 4th 2015");
    Book book_6("I, Robot", "Isaac Asimov", "July 7th 2007");
    Book book_7("The Rule of 3", "Eric Walters", "November 7th 2002");
    Book book_8("Catching Fire", "Suzan Collins", "January 4th 2015");

    // create 1 library
    Library lib_1;

    // insert a book
    insert_list.push_back(lib_1.insert_book(book_1));
    insert_list.push_back(lib_1.insert_book(book_2));
    insert_list.push_back(lib_1.insert_book(book_3));
    insert_list.push_back(lib_1.insert_book(book_4));

    // check values
    cout << "REPEATED BOOK INSERTION CHECK 1: Should print books 1-4 (no info, \"Hamlet\", \"Maze Runner\", \"I'm Number 4\")" << endl;
    lib_1.print();
    // check insertions to see which have failed
    cout << "REPEATED BOOK INSERTION CHECK 1 (continued): Should return true for all insertions" << endl;
    check_insertion_list(insert_list);

    // insert 2 repeated books
    insert_list.push_back(lib_1.insert_book(book_3));
    insert_list.push_back(lib_1.insert_book(book_4));
    // insert 1 un-repeated book
    insert_list.push_back(lib_1.insert_book(book_5));

    // check values
    cout << "REPEATED BOOK INSERTION CHECK 2: Should print books 1-4 plus book 5 (\"Hunger Games\")" << endl;
    lib_1.print();
    // check insertions to see which have failed
    cout << "REPEATED BOOK INSERTION CHECK 2 (continued): Should return true for insertions 1-4, false for 5-6, true for 7" << endl;
    check_insertion_list(insert_list);

    // insert a repeated book as a string
    insert_list.push_back(lib_1.insert_book("I'm Number 4", "Pittacus Lore", "January 4th 2015"));
    // insert an unrepeated book as a string
    insert_list.push_back(lib_1.insert_book("Catching Fire", "Suzan Collins", "January 4th 2015"));

    // check values
    cout << "REPEATED BOOK INSERTION CHECK 3: Should print books 1-5 plus \"Catching fire\"" << endl;
    lib_1.print();
    // check insertions to see which have failed
    cout << "REPEATED BOOK INSERTION CHECK 3 (continued): Should return true for insertions 1-4, false for 5-6, true for 7, false for 8, true for 9" << endl;
    check_insertion_list(insert_list);
}


void check_removal_list(vector<bool> remove_list) {
    // check removals to see which have failed
    for (int i = 0; i < remove_list.size(); i++) {
        // output to console
        cout << "Removal " << (i + 1) << ": " << (remove_list[i] ? "true" : "false") << endl;
    }

    cout << endl;
}

void test_book_removal() {
    // create 4 books with each constructor
    Book book_1;
    Book book_2("Hamlet");
    Book book_3("Maze Runner", "James Dashner");
    Book book_4("I'm Number 4", "Pittacus Lore", "January 4th 2015");
    
    // create a book vector
    vector<Book> book_list = { book_1, book_2, book_3, book_4 };
    
    // create 1 library containing the books
    Library lib_1(book_list);
    
    // check values
    cout << "BOOK OBJECT REMOVAL CHECK 1: Should print book 1-4 (no info, \"Hamlet\", \"Maze Runner\", \"I'm Number 4\")" << endl;
    lib_1.print();
    
    // remove books
    lib_1.remove_book(book_1);
    lib_1.remove_book(book_2);
    
    // check values
    cout << "BOOK OBJECT REMOVAL CHECK 2: Should print books 3-4 (\"Maze Runner\", \"I'm Number 4\")" << endl;
    lib_1.print();
}

void test_book_string_removal() {
    // create 4 books with string values
    Book book_5("Hunger Games", "Suzan Collins", "January 4th 2015");
    Book book_6("I, Robot", "Isaac Asimov", "July 7th 2007");
    Book book_7("The Rule of 3", "Eric Walters", "November 7th 2002");
    Book book_8("Catching Fire", "Suzan Collins", "January 4th 2015");
    
    // create 2 book vectors
    vector<Book> book_list1 = { book_5, book_6 };
    vector<Book> book_list2 = { book_7, book_8 };
    
    // create 2 libraries
    Library lib_1(book_list1);
    Library lib_2(book_list2);
    
    // remove books as strings from the library
    lib_1.remove_book("Hunger Games", "Suzan Collins", "January 4th 2015");
    lib_1.remove_book("I, Robot", "Isaac Asimov", "July 7th 2007");
    
    // check values
    cout << "BOOK STRING REMOVAL CHECK 1: Should print nothing" << endl;
    lib_1.print();
    cout << "\n";
    
    // remove books as string from a different library
    lib_2.remove_book("The Rule of 3", "Eric Walters", "November 7th 2002");
    
    // check values
    cout << "BOOK STRING REMOVAL CHECK 2: Should print \"Catching Fire\"" << endl;
    lib_2.print();
}
void test_nonexistant_removal() {
    // define a remove list vector
    vector<bool> remove_list;
    
    // create books
    Book book_1;
    Book book_2("Hamlet");
    Book book_3("Maze Runner", "James Dashner");
    Book book_4("I'm Number 4", "Pittacus Lore", "January 4th 2015");
    Book book_5("Hunger Games", "Suzan Collins", "January 4th 2015");
    Book book_6("I, Robot", "Isaac Asimov", "July 7th 2007");
    Book book_7("The Rule of 3", "Eric Walters", "November 7th 2002");
    Book book_8("Catching Fire", "Suzan Collins", "January 4th 2015");
    
    // create a book vector
    vector<Book> book_list = { book_3, book_4, book_5, book_6, book_7, book_8 };
    
    // create 1 library
    Library lib_1(book_list);

    // remove 2 books in the library
    remove_list.push_back(lib_1.remove_book(book_7));
    remove_list.push_back(lib_1.remove_book(book_8));

    // check values
    cout << "NONEXISTANT BOOK REMOVAL CHECK 1: Should print books 3-6 (\"Maze Runner\", \"I'm Number 4\", \"Hunger Games\", \"I, Robot\")" << endl;
    lib_1.print();
    // check removals to see which have failed
    cout << "NONEXISTANT BOOK REMOVAL CHECK 1 (continued): Should return true for all removals" << endl;
    check_removal_list(remove_list);
    
    // remove 2 books not in the library
    remove_list.push_back(lib_1.remove_book(book_1));
    remove_list.push_back(lib_1.remove_book(book_2));
    // remove 1 book in the library
    remove_list.push_back(lib_1.remove_book(book_6));

    // check values
    cout << "NONEXISTANT BOOK REMOVAL CHECK 2: Should print books 3-5 (\"Maze Runner\", \"I'm Number 4\", \"Hunger Games\")" << endl;
    lib_1.print();
    // check removals to see which have failed
    cout << "NONEXISTANT BOOK REMOVAL CHECK 2 (continued): Should return true for removals 1-2, false for 3-4, true for 5" << endl;
    check_removal_list(remove_list);
    
    // remove a books as a string that is not in the library
    remove_list.push_back(lib_1.remove_book("Eyes of Minds", "James Dashner", "November 3 2009"));
    // remove a book as a string that is in the library
    remove_list.push_back(lib_1.remove_book("Maze Runner", "James Dashner", "n/a"));
    
    // check values
    cout << "NONEXISTANT BOOK REMOVAL CHECK 3: Should print books 4-5 (\"I'm Number 4\", \"Hunger Games\")" << endl;
    lib_1.print();
    // check removals to see which have failed
    cout << "NONEXISTANT BOOK REMOVAL CHECK 3 (continued): Should return true for removals 1-2, false for 3-4, true for 5, false for 6, true for 7" << endl;
    check_removal_list(remove_list);
}

int main()
{
    test_book_constructor();
    test_library_constructor();
    test_book_insertion();
    test_book_string_insertion();
    test_repeated_insertion();
    test_book_removal();
    test_book_string_removal();
    test_nonexistant_removal();
}

