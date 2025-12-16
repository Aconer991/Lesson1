#pragma once
#include <iostream>
#include <string>

using namespace std;
void cheers(int);
double cube(double x);

int main701()
{
	cheers(5);
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);
	cout << "A" << side << "-foot cube has a volume of: ";
	cout << volume << "cubic feet \n";
	cheers(cube(2));
	
	return 0;
}

void cheers(int n) {
	using namespace std;
	for (int i = 0; i < n; i++)
		cout << "Cheers!";
	cout << endl;
	//std::cout << x;
}
double cube(double x)
{
	return x * x * x;
}


void n_chars(char, int);

void main702()
{
	int times;
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	while (ch != 'q')
	{
		cout << "Enter an integer: ";
		cin >> times;
		n_chars(ch, times);
		cout << "\nEnter anothe character or press the q-key";
		cin >> ch;
	}

	cout << "The value of times is " << times << ".\n";
	cout << "Bye\n";
}

void n_chars(char c, int n)
{
	while (n-- > 0)
		cout << c;
}