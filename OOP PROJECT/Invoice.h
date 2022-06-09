#pragma once
#include<iostream>
using namespace std;
class Invoice {
	string orderID;
	string parcelInfo;
	double weight;
	int xdimension;
	int ydimension;
	int shipmentTime;
	string recieverContact;
	string recieverAddress;
	string recieverCity;
public:
	Invoice();
	virtual ~Invoice();
	const string& getOrderId() const;
	void setOrderId(const string& orderId);
	const string& getParcelInfo() const;
	void setParcelInfo(const string& parcelInfo);
	const string& getRecieverAddress() const;
	void setRecieverAddress(const string& recieverAddress);
	const string& getRecieverContact() const;
	void setRecieverContact(const string& recieverContact);
	int getShipmentTime() const;
	void setShipmentTime(int shipmentTime);
	double getWeight() const;
	void setWeight(double weight);
	int getXdimension() const;
	void setXdimension(int xdimension);
	int getYdimension() const;
	void setYdimension(int ydimension);

	const string& getRecieverCity() const {
		return recieverCity;
	}

	void setRecieverCity(const string& recieverCity) {
		this->recieverCity = recieverCity;
	}
};

