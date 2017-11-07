#include <iomanip>
#include "warehouse.h"
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
//Book books_[Warehouse::MAX_BOOKS];
//long bookCount_;
Warehouse::Warehouse()
{
	bookCount_ = 0;	
}
Warehouse::~Warehouse()
{
	//Deconstructor
	//delete[]books_;
}

//glorified constructor
istream& operator >> (istream& input, Warehouse& warehouse)
{

	for ( int i = 0; i < 4; i++)
	{
		input >> warehouse.books_[warehouse.bookCount_];
		warehouse.bookCount_++;
	}

}

ostream& operator << (ostream& output, const Warehouse& warehouse)
{

	for(int i = 0; i<warehouse.getBookCount(); i++)
		output <<  warehouse.getBooks(i)<<endl << endl;		
	
}

bool Warehouse::find(string isbn, Book& book) const
{
	for (int i = 0; i < bookCount_ -1; i++)
	{	
		
	
		if (isbn.compare(books_[i].getISBN())==0)
		{
			book = books_[i];
			return true;
		}	
		else
			return false;
	}	

}

int Warehouse::find(short year, Book books[]) const
{
	int count;
	for (int i = 0; i < bookCount_; i++)
	{
		if (books_[i].getYear() == year)
			count++;
	}
	return count;	
}
void Warehouse::sort_()
{
	Book temp;
	int j;
	for (int i = 0; i < bookCount_; i++){
		j = i;

		while (j > 0 && books_[j] < books_[j-1]){
			  temp = books_[j];
			  books_[j] = books_[j-1];
			  books_[j-1] = temp;
			  j--;
			  }
		}
	
	
	
	/*Book temp;
	for (int i = 0; i <bookCount_ ; i++)
	{
		for(int j =1; j< bookCount_ -1; j++)
		{
			if (books_[j] < books_[i])
			{
				temp = books_[i];
				books_[i] = books_[j];
				books_[j] = temp;
			}
		}
	}
	*/
}
void Warehouse::sortBooks() 
{
	sort_();
}
int Warehouse::getBookCount() const
	{return bookCount_;}
Book Warehouse::getBooks(int index) const
	{return books_[index];}
