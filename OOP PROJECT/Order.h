#pragma once
#include "Invoice.h"
#include "Customer.h"
#include<iostream>
using namespace std;
class Order {

	Customer* c;
	Invoice* Ivc;
public:
	Order();
	virtual ~Order();
	Customer*& getC() {
		return c;
	}

	void setC(Customer* cc) {
		c = new Customer;
		this->c = cc;
	}

	Invoice*& getIvc() {
		return Ivc;
	}

	void setIvc(Invoice* ivc) {
		Ivc = new Invoice;
		Ivc = ivc;
	}
};
