#pragma once
#include<iostream>
#include <cstring>
using namespace std;
class SortingSection {
public:
	void sorting(string c, string c2)
	{
		int op = 0;
		for (int i = 0; i < c2.length() || c.length(); i++)
		{
			if (c[i] != c2[i])
				op = 1;
		}
		if (op == 0)
			cout << "Same city mails are sorted";
		else
		{
			cout << "mails are not sorted";
		}

	}
	void sorting(string c, string c2, string c3)
	{
		int op = 0;
		for (int i = 0; i < c2.length(); i++)
		{
			if (c[i] != c2[i] != c3[i])
				op = 1;
		}
		if (op == 0)
			cout << "Same city mails are sorted";
		else
		{
			cout << "mails are not sorted";
		}

	}
	void sorting(string c, string c2, string c3, string c4)
	{
		int op = 0;
		for (int i = 0; i < c4.length(); i++)
		{
			if (c[i] != c2[i] != c3[i] != c4[i])
				op = 1;
		}
		if (op == 0)
			cout << "Same city mails are sorted";
		else
		{
			cout << "mails are not sorted";
		}

	}
	SortingSection();
	virtual ~SortingSection();
};