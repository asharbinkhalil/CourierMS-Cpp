#pragma once
#include "Customer.h"
#include "PostalWorker.h"
#include<fstream>
#include<iostream>
#include<cstring>
using namespace std;
class Login :public Customer, public PostalWorker {
	string custPassword;
	string empPassword;
public:
	Login();
	bool empLogin(string n, string p);
	bool custLogin(string n, string p);
	bool headLogin(string n, string p);
	string getCustPassword();
	void setCustPassword(string custPassword);
	string getEmpPassword();
	void setEmpPassword(string empPassword);
	void setCustfile(Customer*);
	//void setEmpfile(string);
	void deleteEmpfile(string);
	virtual ~Login();
};