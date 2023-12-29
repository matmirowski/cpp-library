#include <string>
#include <iostream>
#include "Map.h"

using namespace std;

class Book {
public:
	string author;
    string category;
    size_t pages;
    string status;
    
	Book(string a, string c, size_t p, string s) : author(a), category(c), pages(p), status(s) {}
	
	friend ostream &operator<<(ostream &out, const Book &book)
    {
        out << "Author: " << book.author << ", Pages: " << book.pages << ", Category: " << book.category;
        return out;
    }
};

typedef Map<string, Book> Library;

void fillLibraryWithExampleBooks(Library &lib) {
	Book b1 = Book("G Orwell", "scifi", 264, "borrowed");
	lib.add("1984", b1);
	Book b2 = Book("H Sienkiewicz", "historical novel", 620, "borrowed");
	lib.add("Potop", b2);
	Book b3 = Book("A Sapkowski", "fantasy", 520, "in stock");
	lib.add("Wiedzmin", b3);
}

void printLibrary(const Library &lib) {
	cout << lib << endl;
}


