#pragma once
#include<fstream>
#include<iostream>
#include "PostalWorker.h"
using namespace std;
class AccountOfficer :public PostalWorker
{
public:
	void makebill()
	{

	}
	virtual void setEmpfile(string name, string empPassword)
	{
		fstream fileobj;
		cout << name;
		string fpath = name;
		fileobj.open(fpath + "EN.txt", ios::out);
		if (!fileobj)
			cout << "EMPDATA FILE NOT CREATED\n";
		else
			fileobj << workerName;
		fstream fileobj1;

		fileobj1.open(fpath + "EP.txt", ios::out);
		if (!fileobj1)
			cout << "EMPDATA FILE NOT CREATED\n";
		else
			fileobj1 << empPassword;
	}
	AccountOfficer();
	virtual ~AccountOfficer();
};
