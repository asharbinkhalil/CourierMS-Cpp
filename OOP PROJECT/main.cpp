// OOP PROJECT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
#include "IndependentFuncs.h"
#include<iomanip>
#include<string>
#include<Windows.h>
int main()
{

	IndependentFuncs ifs;
	string arr = "---------------HELLO, HY ,KAISY HO------------";
	cout << "\t\t\t\t";
	for (int i = 0; i < arr.length(); i++)
	{
		Sleep(50);
		cout << arr[i];
	}
	cout << "\n\n\n";
	cout << "\t\t\t _____________________________________________________________________ \n";
	cout << "\t\t\t|          __________________________________________________         |\n";
	cout << "\t\t\t|         |                                                  |        |\n";
	cout << "\t\t\t|         |        HELLO TO POST OFFICE SERVICES...!         |        |\n";
	cout << "\t\t\t|         |__________________________________________________|        |\n";
	cout << "\t\t\t|_____________________________________________________________________|\n";
	cout << "\n\n\n";
	cout << "\t\t\t-------------------------------------------------------------------------\n\n";
	cout << "\t\t\t    IF YOU USING FIRST TIME:  PRESS 1 FOR SIGNUP, PRESS 0 OTHERWISE      \n\n" << flush;
	cout << "\t\t\t-------------------------------------------------------------------------\n\n";
	int choice;
	cin >> choice;
	system("cls");
	//if (choice == 1)
	//	ifs.makePOs();  // one time making only
	ifs.initialization();
	ifs.login();


	return 0;
}


