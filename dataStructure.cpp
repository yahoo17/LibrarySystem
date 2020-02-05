
#include"dataStructure.h"

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



/*            下面是用户数据结构的实现*/
long long userDataStruct::getPhoneNumber()
{
	return m_phoneNumber;
}
long long userDataStruct::getIdNumber()
{
	return m_IdNumber;
}
char* userDataStruct::getPassword()
{
	return m_password;
}

userDataStruct::userDataStruct(long long phone, long long id, char * name, char * password):m_phoneNumber(phone),m_IdNumber(id),m_name(name),m_password(password)
{

}


