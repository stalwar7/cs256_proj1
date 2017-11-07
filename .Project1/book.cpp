	#include <iomanip>
	#include "book.h"

		Book::Book()
		{
		
		}
		Book::~Book()
		{
			//Deconstructor

		}
		istream& operator >> ( istream& input, Book& book )
		{
			input >> book.title_;
			input >> book.authorCount_;
			input >> book.authors_[book.authorCount_];
			input >> book.publisher_;
			input >> book.yearPublish_;
			input >> book.hardCover_;
			input >> book.price_;
			input >> book.isbn_;
			input >> book.copies_;
			return input;
		}
		ostream& operator << ( ostream& output, const Book& book )
		{
			output << "Title: " << book.title_;
			output << "Author: " << book.authors_[book.authorCount_];
			output << "Publisher: " << book.publisher_;
			output << "Year: " << book.yearPublish_;
			output << "Cover: " << book.hardCover_;
			output << "Price: " << book.price_;
			output << "ISBN: " << book.isbn_;
			output << "Copies: " << book.copies_;
			return output;
		}
		bool Book::operator ==(const Book& book)
		{

		}
		bool Book::operator> (const Book& book)
		{

		}
		Book Book::operator= (const Book& book)
		{

		}
		
		string Book::getISBN() const
		{
			return isbn_;
		}

