#ifndef LAB_7_8_BOOK_H
#define LAB_7_8_BOOK_H
#include <string>
using namespace std;

class Book{
private:
    string name, author, country;
    unsigned int isbn;
    bool returned=true;
public:
    Book(string, string, string, unsigned int);
    Book();
    Book(Book &);
    ~Book();
    void print_Book(){
        cout << "Name: " << name << ", Author: " << author << ", Country: " << country << ", ISBN: " << isbn << ", return: " << returned << "\n";
    }

    [[nodiscard]] unsigned int get_isbn() const{
        return isbn;
    }
    void change_borrow(){
        if (returned) returned = false;
        else returned = true;
    }

};
Book::Book(string _name, string _author, string _country, unsigned int _isbn):name(_name),author(_author), country(_country), isbn(_isbn){returned = true;}

Book::Book():name(""), author(""), country(""), isbn(0), returned(true){}

Book::Book(Book &other):name(other.name), author(other.author), country(other.country), isbn(other.isbn), returned(other.returned){}

Book::~Book(){}
#endif //LAB_7_8_BOOK_H
