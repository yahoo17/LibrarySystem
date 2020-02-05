#include"addbook.h"
using namespace std;
void writeBookData(bookDataStruct object)
{
	ofstream write("book.txt", ios::app);
	write << object.getBookName() <<'#'<< object.getBookID()<<'#'<<object.getBookNumber() << endl;
}
void addbook()
{
	char x;
	do
	{
		//输入书的信息
		cout << " 现在开始输入书的信息" << endl;

		cout << " please enter name" << endl;
		string name;
		cin >> name;

		cout << " please enter id" << endl;
		string id;
		cin >> id;

		int number;
		cout << " please enter number" << endl;
		cin >> number;
		
	
		bookDataStruct dataoj(name, id, number);
		//现在该存储书的信息了

		writeBookData(dataoj);
		cout << "您要继续输入嘛，是的话请输入Y/y，否的话输入N/n" << endl;
		cin >> x;
	} while (x == 'Y' || x == 'y');
	
}