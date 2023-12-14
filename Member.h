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

    void get_book(Book &book) override{
        member_loan.add_book(book);
    }

    void return_book(Book &book) override{
        member_loan.return_book(book);
    }
};
Member::Member() : User(){}

Member::Member(string username):User(username){}

#endif //LAB_7_8_MEMBER_H
