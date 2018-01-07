// q7.cpp : conversion from celcius to fahrenheit.
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
	float ctemp;
	cout<<"Enter temperature in celcius = ";
	cin>>ctemp;
	float ftemp = (ctemp * 9/5) + 32;
	cout<<"Temperature equivalent in Fahrenheit = "<<ftemp<<endl;
	system("pause");
	return 0;
}

