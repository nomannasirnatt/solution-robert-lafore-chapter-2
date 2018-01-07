// q1.cpp : Simple gallon to feet example
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int gallons;
	cout<<"Enter number of gallons = ";
	cin>>gallons;
	float cubeFeet = gallons / 7.481;
	cout<<gallons<<" gallon(s) in cubic feet = "<<cubeFeet<<endl;
	system("pause");
	return 0;
}

