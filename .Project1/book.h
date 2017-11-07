
#ifndef BOOK_H
#define BOOK_H
#include<string>
using namespace std;

class Book {
	friend istream& operator >> (istream&, Book&);
	friend ostream& operator << (ostream&, const Book&);

	public:
		static const int MAX_AUTHORS = 20;

		Book();
		~Book();

		string getISBN() const;
		bool operator == (const Book&);
		Book operator = (const Book&);
		bool operator > (const Book&);
	

	private:
		string title_;
		string authors_[Book::MAX_AUTHORS];
		short authorCount_;
		string publisher_;
		short yearPublish_;
		bool hardCover_;
		float price_;
		string isbn_;
		long copies_;
};

#endif
