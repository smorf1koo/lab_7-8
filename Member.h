#ifndef LAB_7_8_MEMBER_H
#define LAB_7_8_MEMBER_H
#include "User.h"
#include "Loan.h"

class Member:public User{
private:
    unsigned int max_size = 15;
    Loan member_loan{max_size};
public:
    Member();
    Member(string);
    ~Member();

    void get_book_by_member(Book &book){
        member_loan.get_book(book, get_username());
        cout << get_username() << " got the book: ";
        book.print_Book();
    }

    void return_book_by_member(Book &book){
        member_loan.return_book(book, get_username());
        cout << get_username() << " returned the book: ";
        book.print_Book();
    }
    void display_books(){
        member_loan.display_books();
    }
};
Member::Member() : User(){}

Member::Member(string username):User(username){}

Member::~Member() {

}

#endif //LAB_7_8_MEMBER_H
