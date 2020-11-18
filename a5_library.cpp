#include "a5_library.hpp"
#include <iostream>
using namespace std;
 
Library::Library() {}
 
Library::Library(vector<Book> new_book_list) :
    book_list(new_book_list.begin(), new_book_list.end()){
}
    
void Library::print() {
    for (int index = 0; index < book_list.size(); index++) {
        cout << book_list[index].print();
    }
    
}
    
