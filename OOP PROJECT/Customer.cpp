#include "Customer.h"
Customer::Customer() {
	// TODO Auto-generated constructor stub

}
Customer::Customer(string cid, string cname, string ccontact, ADDRESS* address)
{
	custId = cid;
	custName = cname;
	custContact = ccontact;
	custAddress = address;
}

const string& Customer::getCustContact() const {
	return custContact;
}

void Customer::setCustContact(const string& custContact) {
	this->custContact = custContact;
}

const string& Customer::getCustId() const {
	return custId;
}

void Customer::setCustId(const string& custId) {
	this->custId = custId;
}

const string& Customer::getCustName() const {
	return custName;
}



Customer::~Customer() {
	// TODO Auto-generated destructor stub
}
