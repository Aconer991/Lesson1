#pragma once

#include <iostream>
#include <string>
using namespace std;
void main001()
{ 	
	cout <<"\a Operation \"HyperHype \" is now activated! \n";
	cout <<"Enter your agent code :  \b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered" << code << "...\n";
	cout <<"\aCode verified !Proceed with Plan ZÇ !\n";
}

void main002()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess = 3.9832;
	int debt = 7.2E12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
}

void main003()
{
	using namespace std;
	float à = 2.34E+22f;
	float Ü = à+1.0f;
	cout << "a = " << à << endl;
	cout << "Ü - à = " << Ü - à << endl;
	
}