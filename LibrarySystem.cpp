
#include <iostream>
#include <C:\Users\DELL\source\repos\LibrarySystem\addbook.h>
#include <C:\Users\DELL\source\repos\LibrarySystem\initialize.h>
#include <C:\Users\DELL\source\repos\LibrarySystem\borrowbook.h>
#include  <C:\Users\DELL\source\repos\LibrarySystem\findbook.h>
#include  <C:\Users\DELL\source\repos\LibrarySystem\printBookData.h>
#include  <C:\Users\DELL\source\repos\LibrarySystem\deleteBookData.h>
#include <iomanip>
using namespace std;

int main()
{
    initializebook();
    while (true)
    
    {
        cout << setw(50)<< "Welcome to Library Management System\n";
      
        cout << " 请输入功能的编号" << endl;
        cout << "1.增加书籍" << endl;

         cout << "2.借阅书籍 " << endl;
         cout << "3.查询书籍" << endl;
         cout << "4.打印所有书籍信息" << endl;
         cout << "5.删除记录" << endl;
        int functionNumber;
        cin >> functionNumber;
        switch (functionNumber)
        {
        case 1:
        {
            addbook();
            break;
        }

        case 2:
        {

            borrowbook();
            break;
        }
        case 3:
        {
            findbook();
            break;
        }
        case 4:
        {
            printBookData();
            break;
        }
        case 5:
        {
            deleteBookData();
            break;
        }
        default:
            break;
        }

    }
   

}

