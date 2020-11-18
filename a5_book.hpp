#ifndef BOOKS
#define BOOKS
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
	//	   INPUTS: new_title - string referring to the book name (if applicable)
	//			   new_authors - string referring to the names of the author(s) of the book (if applicable)
	//             new_dop - string referring to the date of publication (if applicable)
	//     OUTPUTS: none; constructors

	// getters
	string get_book_title();
	string get_book_authors();
	string get_book_dop();

	// service methods
	void print();
	// PURPOSE: output the title, author names, and date of publication to the console
	//     INPUTS: none
	//	   OUTPUTS: none; output to console

};
#endif

