#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(const char* _title, const char* _isbn, int _price)
	{
		title = new char[strlen(_title) + 1];
		isbn = new char[strlen(_isbn) + 1];
		price = _price;
		strcpy(title, _title);
		strcpy(isbn, _isbn);
	}
	void ShowBookInfo()
	{
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
};

class EBook :public Book
{
private:
	char* DRMKey;
public:
	EBook(const char* _title, const char* _isbn, int _price, const char* _drmkey):Book(_title, _isbn, _price)
	{
		DRMKey = new char[strlen(_drmkey) + 1];
		strcpy(DRMKey, _drmkey);

	}
	void ShowEBookInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}

};

int main()
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;

}