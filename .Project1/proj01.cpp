#include "book.h"
#include <iostream>
#include <fstream>
int main()
{

	Book book;
	ifstream inputFile;
	inputFile.open("book.dat");
	inputFile >> book;
	cout << book;


}