#include "Admin.h"



int main() {
	
	char *id = new char[10];
	char *password = new char[10];
	strcpy(id, "123456789");
	strcpy(password, "123456789");
	
	Admin a(id,password);
	a.Login();
	
	delete[]id;
	delete[]password;
	return 0;
}