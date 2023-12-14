#include <iostream>
#include <string>
#include "Loan.h"
#include "Book.h"
#include "User.h"

int main(){
    Book books[10] = {
            Book("Book1", "Author1", "Country1", 1234567890),
            Book("Book2", "Author2", "Country2", 2345678901),
            Book("Book3", "Author3", "Country3", 3456789012),
            Book("Book4", "Author4", "Country4", 4567890123),
            Book("Book5", "Author5", "Country5", 5678901234),
            Book("Book6", "Author6", "Country6", 6789012345),
            Book("Book7", "Author7", "Country7", 7890123456),
            Book("Book8", "Author8", "Country8", 8901234567),
            Book("Book9", "Author9", "Country9", 9012345678),
            Book("Book10", "Author10", "Country10", 123456789),
    };
    Loan loan;
    loan.display_books();
    loan.add_book(books[4]);
    loan.add_book(books[1]);
    loan.add_book(books[5]);
    loan.add_book(books[0]);
    loan.return_book(books[0]);
    loan.display_books();
    return 0;
}