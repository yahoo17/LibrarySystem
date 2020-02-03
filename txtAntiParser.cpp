#include <C:\Users\DELL\source\repos\LibrarySystem\txtAntiParser.h>
void txtAntiParser(vector<bookDataStruct> bookVector)
{
	fstream fileBeRead("C:\\Users\\DELL\\source\\repos\\LibrarySystem\\book.txt",ios::out);
	for (auto x : bookVector)
	{
		fileBeRead << x.getBookName() << "#" << x.getBookID() << "#" << x.getBookNumber() << endl;
	}
	fileBeRead.close();
}