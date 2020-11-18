#ifndef LIBRARY
#define LIBRARY
#include <vector>
#include "a5_book.hpp"
using namespace std;
 
class Library {
    vector<Book> book_list;
 
public:
    Library();
    Library(vector<Book> new_book_list);
    
    void print();
 
};
#endif
