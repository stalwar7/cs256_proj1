
#include <iomanip>
#include "warehouse.h"
#include <iostream>
using namespace std;

int bookCount_;
Book books_[Warehouse::MAX_BOOKS];

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
	input >> books_[bookCount_++];	
}


ostream& operator << (ostream& output, const Warehouse& warehouse)
{
	for(int i = 0; i<bookCount_; i++)
		cout << books_[i];
		
}

/*bool Warehouse::find(string isbn, Book& book) const
{

}
*/
/*int Warehouse::find(short year, Book books[]) const
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
		Book temp;
		if (books[i].getISBN() > books[i + 1].getISBN())
		{
			temp = books[i];
			books[i+1] = books[i];
			books[i] = temp;
		}
	}
}
*/
