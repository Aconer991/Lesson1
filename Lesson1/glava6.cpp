#pragma once
#include <iostream>
#include <string>
#include <climits>

#include <cstring>


using namespace std;

void main601() {
	char ch;
	std::cout << "Набери я повторю.\n";
	std::cin.get(ch);

	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}

	std::cout << "\nPlaease excuse the slight confusin.\n";

	//std: cin.get();
	//std::cin.get();
}
const int Fave = 27;
void main602() {
	int n;

	cout << "Введите номер в диапазоне от 1 до 100 \n";
	cout << "мой любимый номер: ";
	do
	{
		cin >> n;
		if (n < Fave)
			cout << "Слишком маленькое, введи еще: ";
		else if (n > Fave)
			cout << "Слишком большое, введи еще: ";
		else
			cout << Fave << "is right! \n";
	} while (n != Fave);
}

void main603() {
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue <y/n>";
	char ch;
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
		cout << "You were warned!\a\a\n";
	else if (ch == 'n' || ch == 'N')
		cout << "A wise choise .. bye\n";
	else
		cout << "That wasn`t a y or can`t follow\n insruktions, so "
		"I`ll trash your disk anyway.\a\a\a\n";

}

const int ArSize2 = 6;
void main604 () {
	float naaq[ArSize2];
	cout << "Enter the NAAQs (New Age Awareness Quotinents)"
		<< "of\nyour neighbors. Program terminates"
		<< "when your make \n" << ArSize2 << "entries"
		<< "or enter a negative value.\n";
	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize2 && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize2)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}

	if (i == 0)
		cout << "No data--bye\n";
	else {
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;

		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;

		cout << count;
		cout << "of your neighbors have grater awareness of \n"
			<< "the New Age than you do.";
	}


}


const char* qualify[4] =
{
	"10,000 -meter race.\n",
	"mud tug-of-war.\n",
	"masters canoe jousting.\n",
	"pie-throwing festival.\n"	
	
};
void main605(){
	int age;
	cout << "Enter your age in years: ";
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "Your qualify for the " << qualify[index];

}

bool is_int(double);
void main606() {
	double num;
	cout << "Yo, dude! Enter an integer value: ";
	cin >> num;
	while (!is_int(num))
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num);
	cout << "You`ve entered the integer " << val << "\nBye\n";
}


bool is_int(double x)
{
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}