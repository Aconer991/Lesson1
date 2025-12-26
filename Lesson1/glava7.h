#pragma once
#include <iostream>
#include <string>



#include <cstring>

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
		cout << "\nEnter another character or press the q-key: ";
		cin >> c;

	//cout << volume << "cubic feet/ \n";
	//cheers(cube(2));
	

}

long double probability(unsigned numbers, unsigned picks);
int main703() {
	double total, choices;
	cout << "¬вод общего кол-ва номеров, которые нужно угадать и \n"
		"номер разрешенного номера: \n";

	while ((cin >> total >> choices) && choices <= total)
	
		cout << "¬аш шанс: ";
		cout << probability(total, choices);
		cout << "выигрыша \n";
		cout << "¬вод следующих двух чисел (q дл€ завершени€): ";
		//¬вод следующих двух чисел
		cout << "bye\n";
	
	
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}