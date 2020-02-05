
#include"borrowbook.h"


bool borrowbook()
{
	cout << "请问您是用名字查询还是用编号查询" << endl;
	cout << "1.用名字" << endl;
	cout << "2.用编号" << endl;
	int switchNum;
	cin >> switchNum;
	bool findOrNot = false;
	
	switch (switchNum)
	{
	case 1:
	{
		cout << "请输入你要借阅的书的名字" << endl;
		string bookName;
		cin >> bookName;
		//本来应该是直接修改文件的对吧
		//我这里是把文件全部读到内存中，然后修改完再全部写回去
		fstream bookfile("book.txt");
		vector<bookDataStruct> bookData = txtParser(bookfile);
		vector<bookDataStruct> rf(bookData);
		for (bookDataStruct& x : rf)
		{
			if (x.getBookName().compare(bookName) == 0)
			{
				cout << "找到了这条记录： ";
				printObj(x);
				findOrNot = true;
				cout << "请输入你要借阅的书的数量" << endl;
				int num;
				cin >> num;
				if (num <= x.getBookNumber())
					x.setBookNumber(x.getBookNumber() - num);
				cout << x.getBookNumber();
			}
		}
		
		txtAntiParser(rf);
		if (findOrNot == false)
			cout << "没找到记录" << endl;
		
		bookfile.close();


		break;
	}
	case 2:
	{
		fstream bookfile("book.txt");
		vector<bookDataStruct> bookData = txtParser(bookfile);
		vector<bookDataStruct> rf(bookData);
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