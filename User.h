#ifndef LAB_7_8_USER_H
#define LAB_7_8_USER_H
#include "Book.h"
#include "Loan.h"
class User{
protected:
    string username;

public:
    User();
    User(User &);
    User(string);
    ~User();

    string get_name(){ return username;}

    [[maybe_unused]]virtual void get_book(Book &book) = 0;

    [[maybe_unused]]virtual void return_book(Book &book) = 0;
};

User::User():username(""){}

User::User(User &other){    username = other.username;}

User::User(string _username):username(_username){}

User::~User(){}
#endif //LAB_7_8_USER_H
