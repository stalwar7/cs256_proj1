//#include "stdafx.h"
#include <iomanip>
#include "book.h"
#include <iostream>
using namespace std;


Book::Book()
{
	
}
Book::~Book()
{
	//Deconstructor

}
istream& operator >> (istream& input, Book& book)
{
	getline(input, book.title_);
        input >> book.authorCount_;	
	input.ignore();
	for (int i =0 ; i < book.authorCount_ ;i++)
	{	 
         	getline(input, book.authors_[i]);		
	}
	getline(input, book.publisher_);
	input >> book.yearPublish_;
	input >> book.hardCover_;
	input >> book.price_;
	input >> book.isbn_;
	input >> book.copies_;
	input.ignore();
	return input;
}
ostream& operator << (ostream& output, const Book& book)
{
	output << "Title: " << book.title_;
	output << "\nAuthor: ";
	for (int i = 0; i < book.authorCount_;i++)
	{
		output <<"\n\t"<< book.authors_[i];
	}	
	output << "\nPublisher: " << book.publisher_;
	output << "\nYear: " << book.yearPublish_;
	output << "\nCover: " << book.hardCover_;
	output << "\nPrice: " << book.price_;
	output << "\nISBN: " << book.isbn_;
	output << "\nCopies: " << book.copies_ << endl;
	return output;
}
bool operator==(Book& book, Book& book2) 
{
	return (book2.getTitle() == book.getTitle()) &&
		(book2.getAuthors() == book.getAuthors()) &&
		(book2.getPublisher()== book.getPublisher()) &&
		(book2.getYear() == book.getYear()) &&
		(book2.getPrice() == book.getPrice()) &&
		(book2.getISBN() == book.getISBN());
}
bool operator> ( Book& book, Book& book2)
{
	return (book2.getTitle() == book.getTitle()) &&
		(book2.getAuthors() == book.getAuthors()) &&
		(book2.getPublisher() == book.getPublisher()) &&
		(book2.getYear()== book.getYear()) &&
		(book2.getPrice() == book.getPrice()) &&
		(book2.getISBN() == book.getISBN());
}
/*Book Book::operator= ( Book& book, Book& book2)
{
		title_ = book.getTitle();
		authors_[MAX_AUTHORS]= book.authors_[MAX_AUTHORS];
		publisher_ = book.publisher_;
		yearPublish_ = book.yearPublish_;
		price_ = book.price_;
		isbn_ = book.isbn_;
		copies_ = book.copies_;
}
*/

string Book::getISBN() const
{
	return isbn_;
}

short Book::getYear() const
{
	return yearPublish_;
}
string Book::getTitle()
{
	return title_;
}
string Book::getAuthors()
{
	return authors_[Book::MAX_AUTHORS];
}
short Book::getAuthorCount()
{
	return authorCount_;
}
string Book::getPublisher()
{
	return publisher_;
}
bool Book::hardCover()
{
	return hardCover_;
}
float Book::getPrice()
{
	return price_;
}
long Book::getCopies()
{
	return copies_;
}

