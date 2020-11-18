// a5_main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "a5_book.hpp"
#include "a5_library.hpp"
#include <vector>
using namespace std;

void test_book_constructor() {
    // create 4 books with each constructor
    Book b1;
    Book b2("Hamlet");
    Book b3("Maze Runner", "James Dashner");
    Book b4("I'm number 4", "Pittacus Lore", "January 4th 2015");

    // call book service method to check values
    b1.print();
    b2.print();
    b3.print();
    b4.print();
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
    // create 4 books with each constructor
    Book b1;
    Book b2("Hamlet");
    Book b3("Maze Runner", "James Dashner");
    Book b4("I'm number 4", "Pittacus Lore", "January 4th 2015");

    Book b5("Hunger Games", "Suzan Collins", "January 4th 2015");
    Book b6("I, Robot", "Isaac asimov", "July 7th 2007");
    Book b7("The Rule of 3", "Eric Walters", "November 7th 2002");

    // make a book vector
    vector<Book> book_list = { b1, b2, b3, b4 };
    vector<Book> book_list_2 = { b5, b6, b7 };

    // create 2 libraries
    Library lib1;
    Library lib2(book_list);
    Library lib3(book_list_2);

    // call library service method to check values
    lib1.print();
    lib2.print();
    lib3.print();


}

void test_insertion() {
    // define an insert list vector
    vector<bool> insert_list;
    // create 4 books with each constructor
    Book b1;
    Book b2("Hamlet");
    Book b3("Maze Runner", "James Dashner");
    Book b4("I'm number 4", "Pittacus Lore", "January 4th 2015");

    Book b5("Hunger Games", "Suzan Collins", "January 4th 2015");
    Book b6("I, Robot", "Isaac asimov", "July 7th 2007");
    Book b7("The Rule of 3", "Eric Walters", "November 7th 2002");

    Book b8("Catching Fire", "Suzan Collins", "January 4th 2015");

    // create 2 libraries
    Library lib1;

    // insert a book
    insert_list.push_back(lib1.insert_book(b8));
    insert_list.push_back(lib1.insert_book(b2));
    insert_list.push_back(lib1.insert_book(b5));
    insert_list.push_back(lib1.insert_book(b1));

    // check values
    cout << "CHECK 1" << endl;
    lib1.print();

    // insert repeated books
    insert_list.push_back(lib1.insert_book(b1));
    insert_list.push_back(lib1.insert_book(b2));

    // insert another good book
    insert_list.push_back(lib1.insert_book(b3));

    // check values
    cout << "CHECK 2" << endl;
    lib1.print();

    // check insertions to see which have failed
    check_insertion_list(insert_list);

    // check an insertion usings strings as parameters
    insert_list.push_back(lib1.insert_book("The Elegant Universe", "Brian Greene", "October 3 2009"));
    insert_list.push_back(lib1.insert_book("Catching Fire", "Suzan Collins", "January 4th 2015"));

    // check values
    cout << "CHECK 3" << endl;
    lib1.print();

    // check insertions to see which have failed
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

void test_removal() {
    // define an remove list vector
    vector<bool> remove_list;
    // create 4 books with each constructor
    Book b1;
    Book b2("Hamlet");
    Book b3("Maze Runner", "James Dashner");
    Book b4("I'm number 4", "Pittacus Lore", "January 4th 2015");

    Book b5("Hunger Games", "Suzan Collins", "January 4th 2015");
    Book b6("I, Robot", "Isaac asimov", "July 7th 2007");
    Book b7("The Rule of 3", "Eric Walters", "November 7th 2002");

    Book b8("Catching Fire", "Suzan Collins", "January 4th 2015");

    // create 2 libraries
    Library lib1;
    
    // insert a book
    lib1.insert_book(b8);
    lib1.insert_book(b2);
    lib1.insert_book(b5);
    lib1.insert_book(b1);

    // check values
    cout << "CHECK 1" << endl;
    lib1.print();

    // remove good books
    remove_list.push_back(lib1.remove_book(b2));
    remove_list.push_back(lib1.remove_book(b1));

    // remove book not in library
    remove_list.push_back(lib1.remove_book(b7));

    // check values
    cout << "CHECK 2" << endl;
    lib1.print();

    // check removals to see which have failed
    check_removal_list(remove_list);

    // check removals usings strings as parameters
    remove_list.push_back(lib1.remove_book("Hunger Games", "Suzan Collins", "January 4th 2015"));
    remove_list.push_back(lib1.remove_book("I'm number 4", "Pittacus Lore", "January 4th 2015"));

    // check values
    cout << "CHECK 3" << endl;
    lib1.print();

    // check removals to see which have failed
    check_removal_list(remove_list);
}

int main()
{
    /*test_book_constructor();*/
    /*test_library_constructor();*/
    test_insertion();
    test_removal();
}

