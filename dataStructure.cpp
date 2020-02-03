
#include <C:\Users\DELL\source\repos\LibrarySystem\dataStructure.h>

	bookDataStruct::bookDataStruct()
	{
		
			
		
	}
	bookDataStruct::bookDataStruct(string name, string id, int number) :m_bookName(name), m_bookID(id), m_bookNumber(number)
	{
	}

	string bookDataStruct::  getBookName()
	{
		return m_bookName;
	}
	string bookDataStruct::getBookID()
	{
		return m_bookID;

	}
	int  bookDataStruct::getBookNumber()
	{
		return m_bookNumber;
	}
	
	void  bookDataStruct::setBookNumber(int num)
	{
		this->m_bookNumber=num;
	}
 
//随便重载一下输出运算符
void printObj(bookDataStruct& bk)

{
	cout << "书名是 " << setw(40)<<left<< bk.getBookName()  <<" 书的编号是 " << setw(20)<<left<<bk.getBookID() << " 数量：" << bk.getBookNumber() << endl;
	return;
}
