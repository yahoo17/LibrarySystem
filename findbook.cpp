#include  <C:\Users\DELL\source\repos\LibrarySystem\findbook.h>
bool findbook()
{
	cout << "请问您是用名字查询还是用编号查询" << endl;
	cout << "1.用名字(实现方式1)" << endl;
	cout << "2.用编号(实现方式2)" << endl;
	int switchNum;
	cin >> switchNum;
	bool findOrNot = false;
	fstream bookfile("C:\\Users\\DELL\\source\\repos\\LibrarySystem\\book.txt");
	vector<bookDataStruct> bookData = txtParser(bookfile);
	string buffer;
	switch (switchNum)
	{
	case 1:
	{
		cout << "请输入你要借阅的书的名字" << endl;
		string bookName;
		cin >> bookName;
		

		for (auto x : bookData)
			if (x.getBookName().compare(bookName) == 0)
			{
				cout << "找到了这条记录： ";
				printObj(x);
				findOrNot = true;
			}
		if (findOrNot == false)
			cout << "没找到记录" << endl;
		
		
		
		break;
	}
	case 2:
	{
		cout << "请输入你要借阅的书的编号" << endl;
		string bookID;
		cin >> bookID;

		for (auto x : bookData)
			if (x.getBookID().compare(bookID) == 0)
			{
				cout << "找到了这条记录： ";
				printObj(x);
				findOrNot = true;
			}
		if (findOrNot == false)
			cout << "没找到记录" << endl;
		

		break;
	}

	default:
		break;
	}
	cout << endl << endl;
	if (findOrNot == true)
		return true;
	else
		return false;
	
}