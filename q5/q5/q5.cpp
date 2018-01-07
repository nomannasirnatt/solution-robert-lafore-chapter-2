// q5.cpp : use f library function islower().
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include<iostream>
#include<CTYPE.H>
using namespace std;

int main()
{
	char character;
	cout<<"Enter a letter : ";
	cin>>character;
	cout<<islower(character)<<endl;
	system("pause");
	return 0;
}

