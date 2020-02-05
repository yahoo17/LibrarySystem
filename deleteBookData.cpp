#include "deleteBookData.h"
void deleteBookData()
{
	cout << "请输入要删除的记录的编号" << endl;
	int num;
	cin >> num;
	
	fstream bookfile("book.txt");
	vector<bookDataStruct> bookData = txtParser(bookfile);
	vector<bookDataStruct> rf(bookData);
	rf.erase(rf.begin() + num-1);
		
	txtAntiParser(rf);
	
	bookfile.close();

}