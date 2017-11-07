#include "book.h"
#include "warehouse.h"
#include <iostream>
#include <fstream>
int main()
{

	
	Warehouse house;
	Book bookList[4];
	ifstream inputFile;
	inputFile.open("book.dat");
	cout << "---------------------- Sorted Inventory List by ISBN ---------------------" << endl;
	inputFile >> house;
	house.sortBooks();
	cout << house;
	inputFile.close();

	cout << "----------------- Inventory Search ----------------" << endl;
	ifstream input;
	input.open("search.dat");
	Book book;
	string array[3];
	while(!input.eof())
	{
		for (int i = 0; i < 3; i++)
			input >> array[i];
	}


	for(int i = 0; i < 3; i++)
	{
		
		Book book;
		bool res = house.find(array[i], book);
		if(res)
		{
			cout << "ISBN: " << array[i] << "-- FOUND:" << endl;
			cout << book;
			//cout << "Title: "<< book.getTitle() << endl;
			//cout <<"Author: " << book.getAuthors() << endl;
			//cout << "Publisher: " <<book.getPublisher() << endl;
			//cout << "Year: " << book.getYear() << endl;
			//cout << "Cover: " << book.hardCover() << endl;
			//cout << "Prie: " << book.getPrice() << endl;
			//cout << "ISBN: " <<  array[i] <<endl;
			//cout << "Copies: " << book.getCopies() << endl;
		}
		else 
			cout << "ISBN: " << array[i] << " --NOT FOUND" << endl;

	}
	input.close();
	return 0;
}
