#pragma once
#include<iostream>
#include<fstream>
#include "ADDRESS.h"
using namespace std;
class PostOffice {
	char city[20];
	int uniqueId;
public:
	PostOffice(int, char*);
	void makefile()
	{
		string fpath = "./PostOffices/" + getUniqueId();
		ofstream fileobj(getUniqueId() + "Postoffice.dat", ios::out | ios::binary);
		fileobj.write((char*)this, sizeof(*this));
		if (!fileobj.good())
			cout << "error in writing";
		fileobj.close();
	}
	void readfile()
	{
		string fpath = "./PostOffices/";
		ifstream fileobj(getUniqueId() + "Postoffice.dat", ios::in | ios::binary);
		if (!fileobj.good())
			cout << " error in writing";
		fileobj.read((char*)this, sizeof(*this));
		cout << this->getUniqueId();
	}
	PostOffice();
	virtual ~PostOffice();
	int getUniqueId() const;
	void setUniqueId(int uniqueId);

	const char* getCity() const {
		return city;
	}
	void setCity(const char* city)
	{
		strcpy_s(this->city, city);
	}
};
