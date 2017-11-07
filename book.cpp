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
	if(book.hardCover_ == 0)
		output << "\nCover: Hardcover ";
	else
		output << "\nCover: Paperback";
	output << "\nPrice: " << book.price_;
	output << "\nISBN: " << book.isbn_;
	output << "\nCopies: " << book.copies_ << endl;
	return output;
}
bool Book::operator==( const Book& book) const 
{
	return ( isbn_ == book.getISBN());
}
bool Book::operator > (const Book&b) const
{
	return ((isbn_.compare(b.isbn_ ))> 0);
}
bool Book::operator < (const Book& book) const
{
	return ((isbn_.compare(book.isbn_)) < 0);
}
Book Book::operator= (const Book& book) 
{
		title_ = book.title_;
		authorCount_ = book.authorCount_;
		for(int i=0; i<authorCount_; i++)
			authors_[i] = book.authors_[i]; 
		publisher_  = book.publisher_;
		yearPublish_ = book.yearPublish_;
		price_ = book.price_;
		isbn_ = book.isbn_;
		copies_ = book.copies_;
		return book;
}


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

