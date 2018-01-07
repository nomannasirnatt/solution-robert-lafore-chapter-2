// q6.cpp : Conversion of dollar to different currencies.
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
	float amount;
	cout<<"Enter your amount in dollars : ";
	cin>>amount;
	cout<<amount<<" $ = "<<amount/1.487<<" pounds "<<endl
		<<amount<<" $ = "<<amount/0.172<<" franc"<<endl
		<<amount<<" $ = "<<amount/0.584<<" deutschemark"<<endl
		<<amount<<" $ = "<<amount/0.00955<<" yen"<<endl;
	system("pause");
	return 0;
}