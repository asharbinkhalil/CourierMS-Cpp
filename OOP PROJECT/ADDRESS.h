#pragma once
#include<iostream>
using namespace std;
class ADDRESS {
protected:
	string city;
	string street;
	string houseNumber;
public:
	ADDRESS();
	ADDRESS(string cityy, string streett, string hno)
	{
		this->city = cityy;
		this->houseNumber = hno;
		this->street = streett;
	}
	virtual ~ADDRESS();
};
