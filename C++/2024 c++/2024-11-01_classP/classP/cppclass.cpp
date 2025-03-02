#include<iostream>

using namespace std; 

class Book {
private:
	string title;
	string author;
	double price;
	int pageCount;
public:
	
	Book();
	Book(string titleT, string authorT, double priceT, int pageCountT);

	string getTitle() { return title; };
	string getAuthor() { return author; };
	double getprice() { return price; };
	int getPageCount() { return pageCount; };

	void setTitle(string& temp) { title = temp; };
	void setAuthor(string& temp) { author = temp; };
	void setPrice(double& temp) { price = temp; };
	void setPageCount(int& temp) { pageCount = temp; };
	void display() const;
	
};

void Book::display() const {
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Price: " << price << endl;
	cout << "Page Count: " << pageCount << endl;

};

Book::Book() : title("unknown"), author("uknown"), price(0.0), pageCount(0) {};

Book::Book(string titleT, string authorT, double priceT, int pageCountT) :
	title(titleT), author(authorT), price(priceT), pageCount(pageCountT) {};

int main() {
	Book firstBook = Book();
	Book secondBook = Book("the haunting", "colin voong", 12.3, 129);

	firstBook.display();
	secondBook.display();
}


