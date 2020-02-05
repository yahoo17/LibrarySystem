#include"txtAntiParser.h"
void txtAntiParser(vector<bookDataStruct> bookVector)
{
	fstream fileBeRead("book.txt",ios::out);
	for (auto x : bookVector)
	{
		fileBeRead << x.getBookName() << "#" << x.getBookID() << "#" << x.getBookNumber() << endl;
	}
	fileBeRead.close();
}