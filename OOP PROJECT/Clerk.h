#pragma once
#include "PostalWorker.h"
#include<fstream>
using namespace std;
class Clerk :public PostalWorker {
public:
	void setEmpfile(string name, string empPassword)
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
	Clerk();
	virtual ~Clerk();
};

