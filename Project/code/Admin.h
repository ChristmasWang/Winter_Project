#pragma once
#define ADMIN_ID_MAX 100
#define ADMIN_PASSWORD_MAX 100

#include <iostream>
using namespace std;

class Admin{
private:
	char *id;
	char *password;

public:
	Admin();
	Admin(char *cid, char *cpassword);
	void Login();
	void Logout();
	void InquireGoods();
	void AddGoods();
	void DeleteGoods();
	void ModifyGoodsNum();
	void InquireSaleList();
	~Admin();
};

