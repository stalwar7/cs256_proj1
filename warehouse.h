#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <string>
#include "book.h"
using namespace std;

class Warehouse{
	friend istream& operator >> (istream&, Warehouse&);
	friend ostream& operator << (ostream&, const Warehouse&);

	public:
		static const long MAX_BOOKS = 512;

		Warehouse ();
		~Warehouse ();
		
		bool find(string isbn, Book& book) const;

		int find(short year, Book books[]) const;
		
		void sortBooks();
		Book getBooks(int index) const;
		int getBookCount() const;

	private: 
		void sort_();
	
	private:
		Book books_[Warehouse::MAX_BOOKS];
		long bookCount_;
};
#endif
