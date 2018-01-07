// q9.cpp : Take two fractions and show their results.
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
	float a,b,c,d;
	char dummychar = '\\';
	cout<<"Enter first fraction : ";
	cin>>a>>dummychar>>b;
	cout<<"Enter second fraction : ";
	cin>>c>>dummychar>>d;
	float uppar = (a*d + b*c) ;
	float lower = (b*d);
	float sum = (a*d + b*c) / (b*d);
	cout<< "Sum = " <<uppar<<dummychar<<lower<<endl;
	system("pause");
	return 0;
}
