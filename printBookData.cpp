
#include <C:\\Users\\DELL\\source\\repos\\LibrarySystem\\printBookData.h>


void printBookData()
{
	fstream file("C:\\Users\\DELL\\source\\repos\\LibrarySystem\\book.txt");
	vector<bookDataStruct> bookData = txtParser(file);
	int i = 1;
	for (auto x : bookData)
	{
		cout << i << ".";
		printObj(x);
		i++;
	}
}