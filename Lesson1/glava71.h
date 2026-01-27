#pragma once
#include <iostream>
#include <string>




#include <cstring>


using namespace std;
void cheers(int);
double cube(double x);

int main701()
{

	cheers(10);

	cheers(10);

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


void main703() {
	double total, choices;
	cout << "Ввод общего кол-ва номеров, которые нужно угадать и \n"
		"номер разрешенного номера: \n";

	while (cin >> total >> choices && choices <= total && total >= 1) {

		cout << "Ваш шанс выигрыша 1 из  ";
		cout << probability(total, choices);
		cout << "выигрыша \n";
		cout << "Ввод следующих двух чисел (q для завершения): ";
		//Ввод следующих двух чисел
		cout << "bye\n";
	}
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}

const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);
void main704() {
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);

	if (size > 0)
	{
		cout << "Ввод коээфициента переоценки: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Повторный запрос на ввод числа";
		}
		revalue(factor, properties, size);
		show_array(properties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
}
int fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
		cout << "Неправильный ввод, процесс ввода прекращен";
		break;
		}
		else if (temp < 0)
			break;
		ar[i] = temp;
	}
	return i;
}

void show_array(const double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}

void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
		ar[i] *= r;
}



void first();   
void second();

void first() {
	std::cout << "First\n";
	second();
}

void second() {
	std::cout << "Second\n";
	first();
}


const int newSize = 8;
int sum_arr(const int* begin, const int* endl);


void main705() {
	int cookies[newSize] = { 1,2,4,8,16,32,64,128 };
	int sum = sum_arr(cookies, cookies + newSize);
	cout << "Всего элементов cъедено: " << sum << endl;
	sum = sum_arr(cookies, cookies + 3);
	cout << "Три первых элмента cъедено " << sum << "cookies.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "Последние четыре элемента съедено" << sum << "cookies.\n";
}

int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; pt++)
		total = total + *pt;
	return total;
}


unsigned int c_in_str(const char* str, char ch);
void main706() {
	char mmm[15] = "minimum";
	const char* wail = "ululate";
	
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << "Количество символов m " <<  mmm << endl;
	cout << us << "Количество символов u " <<  wail << endl;


}

unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}