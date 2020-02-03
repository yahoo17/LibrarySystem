#include  <C:\Users\DELL\source\repos\LibrarySystem\deleteBookData.h>
void deleteBookData()
{
	cout << "请输入要删除的记录的编号" << endl;
	int num;
	cin >> num;
	
	fstream bookfile("C:\\Users\\DELL\\source\\repos\\LibrarySystem\\book.txt");
	vector<bookDataStruct> bookData = txtParser(bookfile);
	vector<bookDataStruct> rf(bookData);
	rf.erase(rf.begin() + num-1);
		
	txtAntiParser(rf);
	
	bookfile.close();

}