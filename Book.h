#ifndef LAB_7_8_BOOK_H
#define LAB_7_8_BOOK_H
#include <string>
using namespace std;

class Book{
private:
    string name, author, country;
    unsigned int isbn;
    string borrow;
public:
    Book(string, string, string, unsigned int);
    Book();
    Book(const Book &);
    ~Book();

    void print_Book() const{
        cout << "Name: " << name << ", Author: " << author << ", Country: " << country << ", ISBN: " << isbn << ", borrow: " << borrow << "\n";
    }

    [[nodiscard]] unsigned int get_isbn() const{ return isbn;}

    [[nodiscard]] string get_name() const{ return name;}

    [[nodiscard]] string get_author() const{ return author;}

    [[nodiscard]] string get_country() const{ return country;}

    [[nodiscard]] string get_borrow() const{ return borrow;}


    void change_borrow(string &username){
        borrow = username;
    }

    // перегрузки search
    Book* search(string &_target){
        if ((name == _target) || (country == _target) || (author == _target)) return this;
        exit(0);
    }
    Book* search(unsigned int &_target){
        if (isbn == _target) return this;
        exit(0);
    }
    Book* search(string &_target, unsigned int &_target1){
        if (((name == _target) || (country == _target) || (author == _target)) && (isbn == _target1))return this;
        exit(0);
    }
    Book* search(string &_target, string &_target1, string &_target2, unsigned int &_target3){
        if ((name == _target) && (country == _target1) && (author == _target2) && (isbn == _target3)) return this;
        exit(0);
    }
};
Book::Book(string _name, string _author, string _country, unsigned int _isbn):name(_name),author(_author), country(_country), isbn(_isbn){borrow = "";}

Book::Book():name(""), author(""), country(""), isbn(0), borrow(""){}

Book::Book(const Book &other):name(other.name), author(other.author), country(other.country), isbn(other.isbn), borrow(other.borrow){}

Book::~Book(){}

//std::ostream &operator<<(ostream &os, const Book &book) {
//    cout << "Name: " << book.name << ", Author: " << book.author << ", Country: " << book.country << ", ISBN: " << book.isbn << ", return: " << book.returned << "\n";
//}

#endif //LAB_7_8_BOOK_H
