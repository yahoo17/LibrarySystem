
#include "printBookData.h"


void printBookData()
{
	fstream file("book.txt");
	vector<bookDataStruct> bookData = txtParser(file);
	int i = 1;
	for (auto x : bookData)
	{
		cout << i << ".";
		printObj(x);
		i++;
	}
}