// q2.cpp :setw manipulater
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<1990<<setw(11)<<135<<endl
		<<1991<<setw(11)<<7290<<endl
		<<1992<<setw(11)<<11300<<endl
		<<1993<<setw(11)<<16200<<endl;
	system("pause");
	return 0;
}

