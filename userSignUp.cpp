#include "userSignUp.h"
void userSignUP()
{
	fstream file("userData.txt",ios::binary);
	char c[]= "yanhao";
	char d[]= "12345678";
	char* a = c;
	char* b = d;
	userDataStruct da(1, 36078222222, a,b);
	return;

}