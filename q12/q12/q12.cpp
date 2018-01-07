// q12.cpp : Inverse of q10 i.e convert new pond style to old one
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
	float decpound;//new pound styl
	int pound;//for old pound
	float decfrac;//fractional part
	cout<<"Enter decimal pounds: ";
	cin>>decpound;
	pound = int (decpound);
	decfrac = decpound - pound;
	float fshilling = decfrac * 20;
	int shilling = int(fshilling);
	float pence = fshilling - shilling;
	int pen = pence *12;
	cout<<"Equivalent in old notation = " <<'\x9c'<<pound<<"."<<shilling<<"."<<pen<<endl;
	system("pause");
	return 0;
}

