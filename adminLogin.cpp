#include "adminLogin.h"
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