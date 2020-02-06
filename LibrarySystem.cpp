
#include <iostream>
#include "addbook.h"
#include "initialize.h"
#include "borrowbook.h"
#include  "findbook.h"
#include  "printBookData.h"
#include  "deleteBookData.h"
#include "adminLogin.h"
#include "userLogin.h"
#include <iomanip>
using namespace std;

    void user();
    void admin();


    int main()
    {
        initializebook();
        while (true)

        {

            cout << endl;
            cout << "                 " << "Welcome to Library Management System" << endl << endl;
            cout << "1.管理员登录" << endl;
            cout << "2.用户登陆" << endl;
            cout << "3.用户注册" << endl;
            cout << "4.管理员端功能(免登录版)" << endl;
            cout << "5.用户端功能(免登录版)" << endl;

            int userOrAdmin;
            cin >> userOrAdmin;



            switch (userOrAdmin)
            {
            case 1:
            {
                if(adminLogin()==true)
                     admin();
                 break;
            }

            case 2:
            {
                if (userLogin() == true)
                    user();
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                admin();
                break;
            }
            case 5:
            {
                user();
                break;
            }
            default:
            {
                break;
            }
            }
        }


    }

void user()
{
    bool exit = false;
    while (true)
    {
        std::cout << " 请输入功能的编号" << endl;
        std::cout << "1.借阅书籍 " << endl;
        std::cout << "2.查询书籍" << endl;
        std::cout << "3.退出用户登陆" << endl;
        int functionNumber;
        std::cin >> functionNumber;
        switch (functionNumber)
        {


        case 1:
        {

            borrowbook();
            break;
        }
        case 2:
        {
            findbook();
            break;
        }
        case 3:
        {
            exit = true;
        }
        if (exit == true)
            return;

    }
    
    
}
       

}
void admin()
{
    bool exit = false;
    while (true)
    {
        cout << " 请输入功能的编号" << endl;
        cout << "1.增加书籍" << endl;
        cout << "2.查询书籍" << endl;
        cout << "3.打印所有书籍信息" << endl;
        cout << "4.删除记录" << endl;
        cout << "5.退出登陆" << endl;
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
            findbook();
            break;
        }
        case 3:
        {
            printBookData();
            break;
        }
        case 4:
        {
            deleteBookData();
            break;
        }
        case 5:
        {
            exit = true;
        }
        default:
        {
            break;
        }

        }
        if (exit == true)
            return;
    }
    
}
