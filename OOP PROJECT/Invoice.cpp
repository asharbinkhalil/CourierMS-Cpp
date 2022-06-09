#include "Invoice.h"
Invoice::Invoice() {
	// TODO Auto-generated constructor stub
	orderID = "";
	parcelInfo = "";
	weight = 0;
	xdimension = 0;
	ydimension = 0;
	shipmentTime = 0;
	recieverContact = "";
	recieverAddress = "";

}

Invoice::~Invoice() {
	// TODO Auto-generated destructor stub
}


const string& Invoice::getOrderId() const {
	return orderID;
}

void Invoice::setOrderId(const string& orderId) {
	orderID = orderId;
}

const string& Invoice::getParcelInfo() const {
	return parcelInfo;
}

void Invoice::setParcelInfo(const string& parcelInfo) {
	this->parcelInfo = parcelInfo;
}

const string& Invoice::getRecieverAddress() const {
	return recieverAddress;
}

void Invoice::setRecieverAddress(const string& recieverAddress) {
	this->recieverAddress = recieverAddress;
}

const string& Invoice::getRecieverContact() const {
	return recieverContact;
}

void Invoice::setRecieverContact(const string& recieverContact) {
	this->recieverContact = recieverContact;
}

int Invoice::getShipmentTime() const {
	return shipmentTime;
}

void Invoice::setShipmentTime(int shipmentTime) {
	this->shipmentTime = shipmentTime;
}

double Invoice::getWeight() const {
	return weight;
}

void Invoice::setWeight(double weight) {
	this->weight = weight;
}

int Invoice::getXdimension() const {
	return xdimension;
}

void Invoice::setXdimension(int xdimension) {
	this->xdimension = xdimension;
}

int Invoice::getYdimension() const {
	return ydimension;
}

void Invoice::setYdimension(int ydimension) {
	this->ydimension = ydimension;
}