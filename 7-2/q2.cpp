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
		cout << "����: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "����: " << price << endl;
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
		cout << "����Ű: " << DRMKey << endl;
	}

};

int main()
{
	Book book("���� C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("���� C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;

}