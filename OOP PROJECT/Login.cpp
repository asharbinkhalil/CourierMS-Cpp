#include "Login.h"
#include<iostream>
#include<cstring>
#include<string>
Login::Login() {
	// TODO Auto-generated constructor stub

}
bool Login::empLogin(string n, string p)
{

	string tempname;
	string temppaswd;
	string fpath = n;
	fstream fileobj;
	fileobj.open(fpath + "EP.txt", ios::in);
	if (!fileobj)
	{
		cout << "empDATA FILE NOT available\n";
	}
	else
	{
		getline(fileobj, temppaswd);
	}
	fileobj.close();
	fileobj.open(fpath + "EN.txt", ios::in);
	if (!fileobj)
		cout << "empname FILE NOT available\n";
	else
		getline(fileobj, tempname);

	fileobj.close();

	int r1 = 1, r2 = 1;
	for (int i = 0; i < n.length(); i++)
	{
		if (tempname[i] != n[i])
			r1 = 0;
	}
	for (int i = 0; i < p.length(); i++)
	{
		if (temppaswd[i] != p[i])
			r2 = 0;
	}
	if (r2 == 1 && r1 == 1)
	{
		cout << "Login SUCCESSFULL\n";
		return 1;
	}
	else
	{
		cout << "Login not successful\n";
		return 0;
	}
}
bool Login::headLogin(string n, string p)
{

	string tempname;
	string temppaswd;
	string fpath = n;
	fstream fileobj;
	fileobj.open(fpath + "HP.txt", ios::in);
	if (!fileobj)
	{
		cout << "Head password FILE NOT available\n";
	}
	else
	{

		getline(fileobj, temppaswd);
	}
	fileobj.close();
	fileobj.open(fpath + "HN.txt", ios::in);
	if (!fileobj)
	{
		cout << "Head name FILE NOT available\n";
	}
	else
	{
		getline(fileobj, tempname);
	}
	fileobj.close();

	int r1 = 1, r2 = 1;
	for (int i = 0; i < n.length(); i++)
	{
		if (tempname[i] != n[i])
			r1 = 0;
	}
	for (int i = 0; i < p.length(); i++)
	{
		if (temppaswd[i] != p[i])
			r2 = 0;
	}
	if (r2 == 1 && r1 == 1)
	{
		cout << "Login SUCCESSFULL\n";
		return 1;
	}
	else
	{
		cout << "Login not successful\n";
		return 0;
	}
}
bool Login::custLogin(string n, string p)
{
	string tempname;
	string temppaswd;
	string fpath = n;
	fstream fileobj;
	fileobj.open(fpath + "CP.txt", ios::in);
	if (!fileobj)
	{
		cout << "cust password FILE NOT available\n";
	}
	else
	{
		getline(fileobj, temppaswd);
	}
	fileobj.close();
	fileobj.open(fpath + "CN.txt", ios::in);
	if (!fileobj)
	{
		cout << "custname FILE NOT available\n";
	}
	else
	{
		getline(fileobj, tempname);
	}
	fileobj.close();

	int r1 = 1, r2 = 1;
	for (int i = 0; i < n.length(); i++)
	{
		if (tempname[i] != n[i])
			r1 = 0;
	}
	for (int i = 0; i < p.length(); i++)
	{
		if (temppaswd[i] != p[i])
			r2 = 0;
	}
	if (r2 == 1 && r1 == 1)
	{
		cout << "Login SUCCESSFULL\n";
		return 1;
	}
	else
	{
		cout << "Login not successful\n";
		return 0;
	}
}
string Login::getCustPassword() {
	return custPassword;
}
void Login::setCustPassword(string custPassword) {
	this->custPassword = custPassword;
}
string Login::getEmpPassword() {
	return empPassword;
}

void Login::setEmpPassword(string empPassword) {
	this->empPassword = empPassword;
}

Login::~Login() {
	// TODO Auto-generated destructor stub
}
void Login::setCustfile(Customer* c)
{
	fstream fileobj;
	string fpath = c->getCustName();
	fileobj.open(fpath + "CN.txt", ios::out);
	if (!fileobj)
		cout << "CUSTDATA FILE NOT CREATED\n";
	else
		fileobj << c->getCustName();
	fstream fileobj1;
	fileobj1.open(fpath + "CP.txt", ios::out);
	if (!fileobj1)
		cout << "CUSTDATA FILE NOT CREATED\n";
	else
		fileobj1 << custPassword;
	fstream fileobj2;
	fileobj2.open(fpath + "data.txt", ios::out);
	if (!fileobj2)
		cout << "CUSTDATA FILE NOT CREATED\n";
	else
	{
		fileobj2 << c->getCustName();
		fileobj2 << "\n";
		fileobj2 << c->getCustId();
		fileobj2 << "\n";
		fileobj2 << c->getCustContact();
		fileobj2 << "\n";
	}
}
void Login::deleteEmpfile(string name)
{
	string namecopy;
	namecopy = name;
	name = name + "EN.txt";
	cout << "\n" << name.c_str() << "\n";

	if (remove(name.c_str()) == 0)
		cout << "Employee File deleted successfully\n";
	else
		cout << "NOT DELETED ):";

	name = namecopy + "EP.txt";
	cout << "\n" << name << "\n";
	if (remove(name.c_str()) == 0)
		cout << "Employee File deleted successfully\n";
	else
		cout << "NOT DELETED ):";
}

