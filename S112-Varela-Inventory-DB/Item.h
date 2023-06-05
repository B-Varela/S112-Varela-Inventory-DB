#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <fstream>
using namespace std;

struct Item
{
	//Data Members
	int		id;
	int		qty;
	double	price;

	~Item()
	{
		cout << this << " Item destroyed\n";
	}

	string stringify()
	{
		stringstream sout;
		sout << fixed << showpoint << setprecision(2);
		sout << this << " Item [ ID: " << id << " , Price: " << price << " , Qty: " << qty << " ]";
		return sout.str();
	}
};

