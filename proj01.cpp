#include "book.h"
#include <iostream>
#include <fstream>
int main()
{

	//Book bookList[4];
	ifstream inputFile;
	inputFile.open("book.dat");
	//for (int i = 0; i < 4; i++)
	//{
		//Book book;
		//Book book2;
		//Book book3;
		//Book book4;
		//ifstream inputFile;
		//inputFile.open("book.dat");
		/* this should be done in warehouse class
		inputFile >> book;
		cout << book;
		inputFile >> book2;
        	cout << book2;
		inputFile >> book3;
		cout << book3;
		inputFile >> book4;
		cout << book4;
		*/
		//inputFile >> warehouse
	//}
	
	inputFile.close();
	return 0;
}
