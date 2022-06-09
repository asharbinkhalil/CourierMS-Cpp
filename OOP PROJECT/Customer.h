#pragma once
#include<iostream>
using namespace std;

#include "ADDRESS.h"

class Customer {
protected:
	string custId;
	string custName;
	string custContact;
	ADDRESS* custAddress;
public:
	Customer();
	Customer(string, string, string, ADDRESS*);
	virtual ~Customer();
	const string& getCustContact() const;
	void setCustContact(const string& custContact);
	const string& getCustId() const;
	void setCustId(const string& custId);
	const string& getCustName() const;
	void setCustName(const string& custName);

	ADDRESS*& getCustAddress() {
		return custAddress;
	}

	void setCustAddress(ADDRESS* custAddress) {
		this->custAddress = custAddress;
	}
};
