#include <iostream>
#include <string>
#include "Loan.h"
#include "Book.h"
#include "User.h"
#include "Member.h"
#include "Librarian.h"
using namespace std;
int main(){
    // data base
    unsigned int n = 5;
    Book books[5] = {
            Book("Book1", "Author1", "Country1", 12347890),
            Book("Book2", "Author2", "Country2", 23458901),
            Book("Book3", "Author3", "Country3", 34589012),
            Book("Book4", "Author4", "Country4", 45670123),
//            Book("Book5", "Author5", "Country5", 56781234),
//            Book("Book6", "Author6", "Country6", 67892345),
//            Book("Book7", "Author7", "Country7", 78903456),
//            Book("Book8", "Author8", "Country8", 89012567),
//            Book("Book9", "Author9", "Country9", 90123678),
            Book("Book10", "Author10", "Country10", 1234789),
    };
    Member Gleb("Gleb");
    Librarian Oleg("Oleg");
    // заполним нашего библиотекаря книгами

    for(int i = 0; i < 5; i++){
        Oleg.add_book(books[i]);
    }
    Oleg.display_books();
    Oleg.get_book(Gleb, books[1]);
    Gleb.display_books();
    cout << "\n";
    Oleg.display_books();
    books[1].print_Book();
    Oleg.return_book(Gleb, books[1]);
    Gleb.display_books();
    Oleg.display_books();

    return 0;
}