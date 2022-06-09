#pragma once
#include<iostream>
#include<fstream>
using namespace std;
class PostalWorker {
protected:
	string workerName;
	string workerContact;
	string gender;
public:
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
	PostalWorker();
	virtual ~PostalWorker();

	const string& getGender() const {
		return gender;
	}

	void setGender(const string& gender) {
		this->gender = gender;
	}

	const string& getWorkerContact() const {
		return workerContact;
	}

	void setWorkerContact(const string& workerContact) {
		this->workerContact = workerContact;
	}

	const string& getWorkerName() const {
		return workerName;
	}

	void setWorkerName(const string& workerName) {
		this->workerName = workerName;
	}
};
