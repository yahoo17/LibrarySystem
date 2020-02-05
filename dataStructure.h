#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class bookDataStruct
{
	//后面应该要把这个数据结构单独拿出去才对啊
private:
	 string m_bookName;
	 string m_bookID;
	 int m_bookNumber;
public:
	//期待的优化1 让用户输入一行数据 然后我们自己把数据分开
	bookDataStruct();
	bookDataStruct(string name, string id, int number);
public:
	string getBookName();
	string getBookID();
	int  getBookNumber();
public:
	
	void setBookNumber(int );
};
//随便重载一下输出运算符
void printObj(bookDataStruct& bk);
class userDataStruct
{
public:

	userDataStruct(long long phone, long long id, char * name, char * password);
private:
	long long m_phoneNumber;
	long long m_IdNumber;
	char * m_name;
	char  * m_password;

public:
	long long getPhoneNumber();
	long long getIdNumber();
	char * getPassword();




};
#pragma once 