// q11.cpp : using setw and setiosflag(ios::left) manipulator.
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
	cout<<setiosflags(ios::left)<<setw(11)<<"Last name"<<setw(12)<<"Last name"<<setw(18)<<"Street address"<<setw(12)<<"Town"<<setw(5)<<"State"<<endl
		<<"----------------------------------------------------------"<<endl
		<<setw(11)<<"Jones"<<setw(12)<<"Bernard"<<setw(18)<<"109 Pine Lane"<<setw(12)<<"Littletown"<<setw(5)<<"MI"<<endl
		<<setw(11)<<"O'Brian"<<setw(12)<<"Coleen"<<setw(18)<<"42 E. 99th Ave"<<setw(12)<<"Bigcity"<<setw(5)<<"NY"<<endl
		<<setw(11)<<"Wong"<<setw(12)<<"Harry"<<setw(18)<<"121 A Alabama"<<setw(12)<<"Lakeville"<<setw(5)<<"IL"<<endl;
	system("pause");
	return 0;
}

