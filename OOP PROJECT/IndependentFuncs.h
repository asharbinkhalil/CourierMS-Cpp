#pragma once
#include <iostream>
using namespace std;
#include<string>
#include<cstdio>
#include <cstdlib>
#include "Login.h"
#include "Invoice.h"
#include "Order.h"
#include "ADDRESS.h"
#include "PostOffice.h"
#include "Postman.h"
#include "AccountOfficer.h"
#include "SortingSection.h"
#include "Clerk.h"
#include<iomanip>
#include<string>
#include<cstring>
#include <stdio.h>
#include <time.h>
#include <ctime>


class IndependentFuncs {
public:
	void func2()
	{
		int weight[] = { 1,3,5,10,15,20,25,30 };
		int rate[] = { 100,175,250,375,500,625,750,875 };
		cout << setw(103) << setfill('=') << "=\n" << setfill(' ');
		cout << left << "| " << setw(6) << "Sr.No" << "|" << setw(37) << " " << setw(35) << "SLAB" << "|        RATE       |\n";
		cout << right << "|" << setw(102) << setfill('-') << "-|\n" << setfill(' ');
		for (int i = 0; i < (sizeof(weight) / sizeof(int)); i++)
		{

			string p_weight = "UPTO " + to_string(weight[i]) + "Kg";
			string p_rate = "Rs. " + to_string(rate[i]);
			cout << left << "| " << setw(6) << i + 1 << "|  " << setw(70) << p_weight << "|       " << setw(12) << p_rate << "|\n";
			if (i == (sizeof(weight) / sizeof(int)) - 1)
				break;
			cout << right << "|" << setw(102) << setfill('-') << "-|\n" << setfill(' ');
		}
		cout << right << setw(103) << setfill('=') << "=\n" << setfill(' ');
		cout << "|                           REGISTRATION FEE FOR PARCEL                          |       RS.75       |\n";
		cout << right << setw(103) << setfill('=') << "=\n" << setfill(' ');



	}
	void func1()
	{
		cout << setw(111) << setfill('=') << "=\n" << setfill(' ');
		cout << "|  TYPES OF SERVICE     |     RATE OF FEE FOR     |     RATE OF FEE FOR      |    RATE OF FREE FOR EVERY     |\n";
		cout << "|                       |    WEIGHT UPTO 250 gm   |    WEIGHT UPTO 500 gm    |       ADDITIONAL 500 GM       |\n";
		cout << setw(111) << setfill('=') << "=\n" << setfill(' ');
		cout << "|" << setw(24) << "|" << setw(26) << "|" << setw(27) << '|' << setw(33) << "|\n";
		cout << "|     UMS  (LOCAL)      |          RS.51          |          RS. 64          |            RS. 26             |\n";
		cout << "|" << setw(24) << "|" << setw(26) << "|" << setw(27) << '|' << setw(33) << "|\n";
		cout << setw(111) << setfill('-') << "-\n" << setfill(' ');
		cout << "|" << setw(24) << "|" << setw(26) << "|" << setw(27) << '|' << setw(33) << "|\n";
		cout << "|   UMS (CITY TO CITY)  |          RS.86          |          RS.132          |            RS. 43             |\n";
		cout << "|" << setw(24) << "|" << setw(26) << "|" << setw(27) << '|' << setw(33) << "|\n";
		cout << setw(111) << setfill('=') << "=\n" << setfill(' ') << endl;

	}
	/*void makePOs()
	{
		PostOffice po[5];
		po[0] = PostOffice(1, "CHAKWAL");
		po[0].makefile();
		po[1] = PostOffice(2, "ISLAMABAD");
		po[1].makefile();
		po[2] = PostOffice(2, "LAHORE");
		po[2].makefile();
		po[3] = PostOffice(4, "KARACHI");
		po[3].makefile();
		po[4] = PostOffice(5, "HYDERABAD");
		po[4].makefile();
	}*/



	//const std::string currentDateTime() {
	//	time_t     now = time(0);
	//	struct tm  tstruct;
	//	char       buf[80];
	//	tstruct = *localtime_s(&now);
	//	// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
	//	// for more information about date/time format
	//	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

	//	return buf;
	//}
	void initialization()
	{

		///////////////////////////////////////////////FOR DEFAULT NAME AND PASSWORD SIGN-UP///////////////////////////
		Login l;
		char ch;
		cout << "\n\t\t\t---------------------------------------------------------\n";
		cout << "\n\t\t\tENTER CREDENTIALS FOR SIGNUP AS EMPLOYEE OR COSTUMER\n"
			"\t\t\tPRESS --C-- FOR CUSTOMER AND --E-- FOR EMPLOYYE\n" << flush;
		cout << "\n\t\t\t---------------------------------------------------------\n";
		cin >> ch;
		string name;
		char password[6];
		if (ch == 'e' || ch == 'E')
		{
			cin.ignore();
			cout << "ENTER NAME  " << flush; getline(cin, name);
			//      l.setEmpName(name);
			cout << "ENTER PASSOWRD  MAX LENGTH 6 CHARACTERS" << flush;
			cin >> password;
			l.setEmpPassword(password);
			cout << "Enter YOUR DESIGNATION c for clerk a for aacount officer p for postman: ";
			char empchoice; cin >> empchoice;
			PostalWorker* pw;
			if (empchoice == 'c' || empchoice == 'C')
			{
				pw = new Clerk;
				pw->setWorkerName(name);
			}

			else if (empchoice == 'a' || empchoice == 'A')
			{
				pw = new AccountOfficer;
				pw->setWorkerName(name);
			}
			else
			{
				pw = new Postman;
				pw->setWorkerName(name);
			}
			pw->setEmpfile(name, password);
			cout << "CONGRATULATIONS__REGISTRATION SUCCESFUL__\n";
		}
		if (ch == 'c' || ch == 'C')
		{
			cin.ignore();
			cout << "\n---------------------------------------------------------\n";
			cout << "\tDEAR CUSTOMER\nENTER NAME : \n" << flush;
			cout << "\n---------------------------------------------------------\n";
			getline(cin, name);
			cout << "DEAR  " << name << " ";
			string phno, city, hno, street;
			cout << "ENTER YOUR PHONE NUMBER\n";
			cin >> phno;
			cin.ignore();
			cout << "ENTER YOUR ADDRESS\nFIRST ENTER YOU CITY";
			getline(cin, city);
			cout << "ENTER YOUR STREET NAME\n";
			getline(cin, street);
			cout << "ENTER YOUR HOUSE NUMBER\n";
			getline(cin, hno);
			ADDRESS* objadd;
			objadd = new ADDRESS(city, street, hno);
			Customer* c;
			c = new Customer(to_string(rand()), name, phno, objadd);
			cout << "ENTER PASSOWRD : \n" << flush; cin >> password;
			l.setCustPassword(password);
			l.setCustfile(c);
			func2();
			func1();
			cout << "\n---------------------------------------------------------\n";
			cout << "CONGRATULATIONS__REGISTRATION SUCCESFUL__\n";
			cout << "\n---------------------------------------------------------\n";
			l.custLogin(name, password);
			if (l.custLogin(name, password) == 1)
			{
				cout << "\n---------------------------------------------------------\n";
				cout << "                     LOGIN SUCCESFUL__\n";
				cout << "\n---------------------------------------------------------\n";

				cout << "DO YOU WANT TO SHIP A PARCEL: \n"
					"Press 1 to Make parcel Press 0 to LOGOUT";
				int ch; cin >> ch;
				if (ch == 1)
				{
					makeParcel(c);
				}

			}
		}
	}//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void login()
	{
		Login l;
		string name;
		string password;
		int c;
		cout << "\n\n\n";
		cout << "          __________________________________________________ \n";
		cout << "         |                                                  |\n";
		cout << "         |        YOU ARE READY TO LOG IN........!          |\n";
		cout << "         |__________________________________________________|\n";
		cout << "\n\n\n";
		cout << "__________________________________________________ \n";
		cout << "   |Press| 1 for CUSTOMER\n"
			"   |-----| 2 for WORKER\n"
			"   |-----| 3 for HEAD of GPO LOGIN:\n";
		cout << "__________________________________________________ \n";
		cin >> c;
		cin.ignore();
		cout << "ENTER NAME: ";
		getline(cin, name);
		cout << "ENTER PASSOWRD: MAX LENGTH 6 CHARACTERS";
		cin >> password;
		switch (c)
		{
		case 1:
			l.custLogin(name, password);
			break;
		case 2:
			l.empLogin(name, password);
			break;
		case 3:
			l.headLogin(name, password);
			if (l.headLogin(name, password) == 1)
			{
				int choice;
				cout << "YOU CAN ADD REMOVE OR UPDATE A EMPLOYEE\n";
				cout << "Press 1 to add 2 to remove and 3 update: else press 0 to exit\n";
				cin >> choice;
				switch (choice)
				{
				case 1:
					initialization();   /// do only for employee
					break;
				case 2:
					string nametodelete;
					cin.ignore();
					cout << "ENTER NAME OF EMPLOYEE TO DELETE:\n";
					getline(cin, nametodelete);
					l.deleteEmpfile(nametodelete);
					break;
				}
				char newchoice;
				cout << "DO YOU WANT TO SEARCH FOR EMPLOYEE:y/n\n";
				cin >> newchoice;
			}
			break;
		}
	}
	void makeParcel(Customer* c)
	{

		char status;
		cout << "enter status of order ?URGENT/ REGULAR/ oneday (make sure tO WIRTE ESTIMATED";
		cin >> status;
		int count=0; char ochoice;
		string rcity[5];
		do
		{
			Invoice* objIVC;
			objIVC = new Invoice;
			objIVC->setOrderId(to_string(rand()));
			string parcelInfo;
			double weight;
			int xdimension;
			int ydimension;
			int shipmentTime;
			string recieverContact;
			string recieverAddress, recieverCity;
			cout << "ENTER PARCEL INFORMATION\n"; cin.ignore(); getline(cin, parcelInfo);
			cout << "ENTER WEIGHT INFORMATION\n"; cin >> weight;
			int price, stamp, totalPrice;
			if (weight > 0 && weight <= 1)
			{
				price = 100;
				cout << "You will be have Stamp of___ Rs. 100 " << endl;
				stamp = 1;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;

			}
			else if (weight > 0 && weight < +3)
			{
				price = 175;
				cout << "You have to Pay for Tickets Rs. 175 " << endl;
				cout << "\n__ You got__\n 1: Ticket of Rs. 100\n2: Ticket of Rs. 50\n3: Ticket of Rs. 20\n4: Ticket of Rs. 5 " << endl;
				stamp = 4;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;
			}
			else if (weight > 3 && weight <= 5)
			{
				price = 250;
				cout << "You have to Pay for Tickets Rs. 250 " << endl;
				cout << "\n__ You got ___\n1: Ticket of Rs. 100\n2: Ticket of Rs. 100\n3: Ticket of Rs. 50 " << endl;
				stamp = 3;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;
			}
			else if (weight > 5 && weight <= 10)
			{
				price = 375;
				cout << "You have to Pay for Tickets Rs. 375 " << endl;
				cout << "\n__ You got__\n 1: Ticket of Rs. 100\n2: Ticket of Rs. 100\n3: Ticket of Rs. 100\n4: Ticket of 50\n5: Ticket of 5 " << endl;
				stamp = 6;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;

			}
			else if (weight > 10 && weight <= 15)
			{
				price = 500;
				cout << "You have to Pay for Tickets Rs. 500 " << endl;
				cout << "\n__ You got__\n 5 Tickets of Rs. 100 " << endl;
				stamp = 5;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;
			}
			else if (weight > 15 && weight <= 20)
			{
				price = 625;
				cout << "You have to Pay for Tickets Rs. 625 " << endl;
				cout << "\n__ You got __\n1: Six_Ticket of Rs. 100\n2: Ticket of Rs. 50\n3: Ticket of Rs. 5 " << endl;
				stamp = 8;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;
			}
			else if (weight > 20 && weight <= 25)
			{
				price = 750;
				cout << "You have to Pay for Tickets Rs. 750 " << endl;
				cout << "\n__ You got __\n1: Seven Ticket of Rs. 100\n2: One Ticket of Rs. 50 " << endl;
				stamp = 8;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;
			}
			else if (weight > 25 && weight <= 30)
			{
				price = 875;
				cout << "You have to Pay for Tickets Rs. 875 " << endl;
				cout << "\n__ You got__\n 1: Eight_Ticket of Rs. 100\n2: One_Ticket of Rs. 50\n3: One_Ticket of Rs.20\n4: One_Ticket of 50 " << endl;
				stamp = 11;
				cout << " Your Total Stamp on Your Parcel will be " << stamp;
				totalPrice += price;
			}
			///filing record of stamps sold
			fstream fileobj;
			int a = 0;
			a++;
			fileobj.open("STAMPSRECORD.txt", ios::app);
			if (!fileobj)
				cout << "STAMPS NOT CREATED\n";
			else
			{
				

				fileobj << a << "\n" << "time";
			}
			fileobj << "\n" << stamp << "\n" << totalPrice;


			cout << "ENTER X-DIMENSION INFORMATION\n"; cin >> xdimension;
			cout << "ENTER Y-DIMENSION INFORMATION\n"; cin >> ydimension;
			cout << "ENTER SHIPMENT TIME INFORMATION\n"; cin >> shipmentTime;
			cout << "ENTER RECIEVER CONTACT INFORMATION\n"; cin.ignore(); getline(cin, recieverContact);
			cout << "ENTER RECIEVER CITY INFORMATION\n"
				"CHAKWAL, LAHORE KARACHI, ISLAMABAD,"
				" HyDERABAD services available only\n,"; cin.ignore(); getline(cin, recieverCity);
			cout << "ENTER RECIEVER ADDRESS INFORMATION\n"; cin.ignore(); getline(cin, recieverAddress);
			objIVC->setParcelInfo(parcelInfo);
			objIVC->setWeight(weight);
			objIVC->setShipmentTime(shipmentTime);
			objIVC->setXdimension(xdimension);
			objIVC->setYdimension(ydimension);
			objIVC->setRecieverContact(recieverContact);
			objIVC->setRecieverAddress(recieverAddress);
			objIVC->setRecieverCity(recieverCity);
			cout << "PARCEL INFORMATION:\n";
			cout << objIVC->getParcelInfo();
			cout << "weight INFORMATION:\n";
			cout << objIVC->getWeight();
			cout << "shipment time hour INFORMATION:\n";
			cout << objIVC->getShipmentTime();
			cout << "x axiis INFORMATION:\n";
			cout << objIVC->getXdimension();
			cout << "y_axis INFORMATION:\n";
			cout << objIVC->getYdimension();
			cout << "CONTACTNFORMATION:\n";
			cout << objIVC->getRecieverContact();
			cout << "RECIEVER ADRESS INFORMATION:\n";
			cout << objIVC->getRecieverAddress();
			cout << "RECIVER CITY INFORMATION:\n";
			cout << objIVC->getRecieverCity();
			Order* objorder;
			objorder = new Order;
			objorder->setIvc(objIVC);
			objorder->setC(c);
			cout << "do you want to place more orders y/n ";
			cin >> ochoice;
			if (ochoice == 'y' || ochoice == 'Y')
				count++;
			//	strcpy(rcity[count],objIVC->getRecieverCity());
		} while (ochoice == 'y' || ochoice == 'Y');

		SortingSection sort;
		switch (count)
		{
		case 1:
			sort.sorting(rcity[0], rcity[1]);
			break;
		case 2:
			sort.sorting(rcity[0], rcity[1], rcity[2]);
			break;
		case 3:
			sort.sorting(rcity[0], rcity[1], rcity[2], rcity[3]);
			break;
		}

	}
};
