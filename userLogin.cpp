

#include "userLogin.h"

bool userLogin()
{
	cout << " ÇëÊäÈëÃÜÂë" << endl;
	string password;
	cin >> password;
	if (password.compare("123") == 0)
		return true;
	else
		return false;
}
