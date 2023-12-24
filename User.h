#include <iostream>
#ifndef LAB_7_8_USER_H
#define LAB_7_8_USER_H
#include "Book.h"
#include "Loan.h"
class User{
private:
    string username;
public:
    User();
    User(User &);
    User(string);
    virtual ~User();

    string get_username(){ return username;}
};

User::User():username(""){}

User::User(User &other){    username = other.username;}

User::User(string _username):username(_username){}

User::~User(){}
#endif //LAB_7_8_USER_H
