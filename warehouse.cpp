#include <iomanip>
#include "warehouse.h"
#include <iostream>

// int bookCount;

Warehouse::Warehouse()
{
 // this calls the overloaded >> 
}
Warehouse::~Warehouse()
{
	//Deconstructor
}

//glorified constructor
istream& operator >> (istream& input, Warehouse& warehouse)
{
	input >> books_[MAX_BOOKS];
	input >> warehouse.bookCount_;
/*
 bookCount = 0;

Book bookList[4] = create array
while (not end of file)
{
   read from database to make book
   bookList[bookCount++] = make a new book object
}
*/


}
//glorified toString
ostream& operator << (ostream& output, const Warehouse& warehouse)
{
	for(int i = 0; i<books_.bookCount; i++)
		cout << books_[i];
		//just make ostream << for the book class
}
bool Warehouse::find(string isbn, Book& book) const
{

}
int Warehouse::find(short year, Book books[]) const
{
	int count;
	for (int i = 0; i < books.length; i++)
	{
		if (books[i].getYear() == year)
			count++;
	}
	return count;	
}

void Warehouse::sort(Book books[])
{
	int size = books.length;
	for (int i = 0; i < size -1; i++)
	{
		string temp;
		if (books[i].getISBN() > books[i + 1].getISBN())
		{
			temp = books[i];
			books[i+1] = books[i];
			books[i] = temp;
		}
	}
}

