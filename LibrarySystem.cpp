
#include <iostream>
#include "addbook.h"
#include "initialize.h"
#include "borrowbook.h"
#include  "findbook.h"
#include  "printBookData.h"
#include  "deleteBookData.h"
#include "adminLogin.h"
#include <iomanip>
using namespace std;


int main()
{
    initializebook();
    while (true)
    
    {
        cout << endl;
        cout << "                 "<< "Welcome to Library Management System"<<endl<<endl;
        cout << "1.管理员登录" << endl;
        cout << "2.用户登陆" << endl;
        cout << "3.用户注册" << endl;

        int userOrAdmin;
        cin >> userOrAdmin;
        static bool adminState=0;
        /*这里说明一下业务逻辑，首先，如果是第一次登录，就要输入密码
            如果已经登录过了，就不用输入密码了，用static保存的登陆状态*/
        static bool userState = 0;
        
        switch (userOrAdmin)
        {
        case 1:
        {  bool adminExit = 0; //要配合下面的while 判断 要么登录成功 要么选择退出
             
            do 
            {
                if(adminState!=1)
                    adminState = adminLogin();
                if (adminState ==false)
                {
                    cout << "请问你要继续尝试登录吗？是的话输入Y/y，不是的话输入N/n" << endl;
                    char yesOrNot;
                    cin >> yesOrNot;
                    if (yesOrNot == 'y' || yesOrNot == 'Y')
                        ;
                    else
                    {
                        adminExit = 1;
                    }
                }
            } while (adminState != 1 && adminExit != 1);
            if (adminState == 1)
                cout << "登录成功" << endl;
            if (adminExit == 1)
                break;
            cout << " 请输入功能的编号" << endl;
            cout << "1.增加书籍" << endl;
            cout << "2.查询书籍" << endl;
            cout << "3.打印所有书籍信息" << endl;
            cout << "4.删除记录" << endl;
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
            default:
                break;
            }
            break;
        }
        case 2:
        {
            cout << " 请输入功能的编号" << endl;
            cout << "1.借阅书籍 " << endl;
            cout << "2.查询书籍" << endl;
           
            int functionNumber;
            cin >> functionNumber;
            switch (functionNumber)
            {
          

            case 1:
            {

                borrowbook();
                break;
            }
            case 3:
            {
                findbook();
                break;
            }
          
            default:
                break;
            }
            break;
        }
        case 3:
        {
           
            break;
        }
        default:
            break;
        }
        

    }
   

}

