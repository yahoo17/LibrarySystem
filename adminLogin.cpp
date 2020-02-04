#include <C:\Users\DELL\source\repos\LibrarySystem\adminLogin.h>
bool adminLogin()
{
	cout << "ÇëÊäÈëÄãµÄÃÜÂë" << endl;
	string password;
	cin >> password;
	if (password == "123")
		return true;
	else
		return false;
}