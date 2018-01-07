// q10.cpp : Convert old pounds-shellings-pence format to decimal pounds
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
	int pound,shilling,pence;
	float decimalPound;
	cout<<"Enter pounds : ";
	cin>>pound;
	cout<<"Enter shillings : ";
	cin>>shilling;
	cout<<"Enter pence : ";
	cin>>pence;
	decimalPound = pound + shilling/20.0 + pence/240.0;
	cout<<"Decimal pound = "<<'\x9c'<<decimalPound<<endl;
	system("pause");
	return 0;
}