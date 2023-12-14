#ifndef LAB_7_8_LIBRARIAN_H
#define LAB_7_8_LIBRARIAN_H
#include "User.h"
#include "Loan.h"

class Librarian:public User{
private:
    unsigned int max_size = 100;
    Loan librarian_loan{max_size};
public:
    Librarian();
    Librarian(string);
    ~Librarian();

    void get_book(Book &book) override{
        librarian_loan.add_book(book);
    }

    void return_book(Book &book) override{
        librarian_loan.return_book(book);
    }
};
Librarian::Librarian() : User(){}

Librarian::Librarian(string username):User(username){}
#endif //LAB_7_8_LIBRARIAN_H
