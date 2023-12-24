#ifndef LAB_7_8_LOAN_H
#define LAB_7_8_LOAN_H
#include "Book.h"

class Loan{
private:
    unsigned int size, max_size;
    Book** array;
public:
    Loan(unsigned int);
    ~Loan();
    void get_book(Book& object, string);
    void return_book(Book& object, string);
    void display_books() const;
    void add_book_in_loan (Book& object, string);
    Book get_lone(){return **array;}
    unsigned int get_size() const{return size;}
};

void Loan::add_book_in_loan(Book &object, string username) {
    if (size < max_size) {
        object.change_borrow(username);
        array[size++] = &object;
    }
    else cout << "Loan is full\n";
}

void Loan::get_book(Book &object, string username) {
    if (size < max_size) {
        object.change_borrow(username);
        array[size++] = &object;
    }
    else cout << "Loan is full\n";
}

void Loan::return_book(Book& object, string username){
    for (int i=0; i < size; i++){
        if (object.get_isbn() == array[i]->get_isbn()){
            array[i] = array[size-1];
            *array[size-1] = Book();
            size--;
            object.change_borrow(username);
            cout << "Book had returned: ";
            object.print_Book();
            return;
        }

    }
    cout << "Book wasn't found\n";
}

void Loan::display_books() const{
    if (size == 0){
        cout << "Loan in empty\n";
    }
    else {
        for (int i = 0; i < size; i++) {
            cout << "Book " << i+1 << " - ";
            array[i]->print_Book();
        }
    }
}

Loan::Loan(unsigned int _max_size):array(new Book*[_max_size]{}), size(0), max_size(_max_size){}

Loan::~Loan(){delete[] array;}

#endif //LAB_7_8_LOAN_H
