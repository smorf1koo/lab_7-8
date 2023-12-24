#ifndef LAB_7_8_LIBRARIAN_H
#define LAB_7_8_LIBRARIAN_H
#include "User.h"
#include "Loan.h"
//using namespace std;
class Librarian:public User{
private:
    unsigned int max_size = 100;
    unsigned int size = 0;
    Loan loan{max_size};
    string librarian_name = get_username();
public:
    Librarian();
    Librarian(string);
    virtual ~Librarian();

    Loan return_loan(){
        return loan;
    }

    void add_book(Book &book){
        loan.add_book_in_loan(book, librarian_name);
        size++;
        cout << "Book was added in Librarian\n";
    }

    void get_book(Member &member, Book &object){
        string member_name = member.get_username();
        object.change_borrow(member_name);
        member.get_book_by_member(object);
    }

    void return_book(Member &member, Book &object){
        object.change_borrow(librarian_name);
        member.return_book_by_member(object);
    }

    void display_books(){
        loan.display_books();
    }
};
Librarian::Librarian() : User(){}

Librarian::Librarian(string username):User(username){}

Librarian::~Librarian() {
}

#endif //LAB_7_8_LIBRARIAN_H
