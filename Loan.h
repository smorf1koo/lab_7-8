#ifndef LAB_7_8_LOAN_H
#define LAB_7_8_LOAN_H
#include "Book.h"

class Loan{
private:
    unsigned int size, max_size;
    Book* array;
public:
    Loan(unsigned int);
    ~Loan();
    void add_book(Book& object);
    void return_book(Book& object);
    void display_books();

};

void Loan::add_book(Book &object) {
    if (size < max_size) {
        object.change_borrow();
        array[size++] = object;
        cout << "Book added:";
        object.print_Book();
    }
    else cout << "Loan is full\n";
}

void Loan::return_book(Book& object){
    for (int i=0; i < size; i++){
        if (object.get_isbn() == array[i].get_isbn()){
            array[i] = array[size];
            array[size] = Book();
            size--;
            object.change_borrow();
            cout << "Book had returned: ";
            object.print_Book();
            return;
        }

    }
    cout << "Book wasn't found\n";
}

void Loan::display_books() {
    if (size == 0){
        cout << "Loan in empty\n";
    }
    else {
        for (int i = 0; i < size; i++) {
            cout << "Book " << i << " - ";
            array[i].print_Book();
        }
    }
}

Loan::Loan(unsigned int _max_size):array(new Book[_max_size]), size(0), max_size(_max_size){}

Loan::~Loan(){delete[] array;}

#endif //LAB_7_8_LOAN_H
