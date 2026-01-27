#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;
void main501 () {
	int i;

	for (i = 0; i < 5; i++)
		cout << "C++ knows loops\n";
}

void main502 () {
	int x;
	cout << "Значение выражения x = 100 имет значение ";
	cout << (x = 100) << endl;
	cout << "Теперь x = " << x << endl;
	cout << "Вывод значения выражения x < 3. Имеет значение";
	cout << (x < 3) << endl;
	cout << "Вывод значения выражения x > 3. Имеет значение";
	cout << (x > 3) << endl;
	cout << boolalpha; //новое средство с++
	cout << "Вывод значения выражения x < 3";
	cout << (x < 3) << endl;
	cout << "Вывод значения выражения x > 3";
	cout << (x > 3) << endl;
}
const int ArSize = 16;
void main503() {
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1;
	int i = 0;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];

	for (i = 0; i < ArSize; i++)
		std::cout << i << "!=" << factorials[i] << std::endl;
}

void main504() {
	cout << "The Amazing Accunt will sum and average";
	cout << "five number for you.";
	cout << "Please enter five values: \n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Value" << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exqusite choices indeed!";
	cout << "They sum to " << sum << endl;
	cout << "and average to" << sum / 5 << ".\n";
	//cout << "The Amazing Account bids you adueu!\n";

}

void main505() {
	cout << "Введите слово: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";
}

void main506() {
	int quizcores[10] =
	{20,20,20,20,22,19,20,18,20,20};
	int i;
	cout << "Сделай это правильно: ";
	
	for (i = 0; quizcores[i] == 20; i++)
		cout << "quiz" << i << "is a 20\n";

	/*cout << "Выполнять опасно: \n";
	for (i = 0; quizcores[i] = 20; i++)
		cout << "quiz" << i << "is a 20\n";*/

}

void main507() {
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
}
void main508() {
	int x;
	int newchar[10] = {20,20,20,20,22,19,20,18,20,20 };
	for (x = 0; x < 10; x++)
		cout << newchar[x] << "\n";
}

void main509() {
	char name[ArSize];
	cout << "Ваше имя пожалуйста: ";
	cin >> name;
	cout << "Вот ваше имя по стилю : \n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << "." << int(name[i]) << endl;
		i++;
	}
}


void main510() {
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		cout << "done \a\n";
}

void main511() {
	int I = 0;
	for (;;)
	{
		I++;
		cout << I;
		if (I >= 30) break;
	}
}

//цикл for основанный на диапазонее
void main512() {
	double prices[5] = { 4.99, 10.99, 6.87, 7.99, 8.49 };
	for (double& x : prices){
		x = x * 0.80;
		cout << x << std::endl;
	}
}

void main513() {
	char xh;
	int count = 0;
	cin.get(xh);
	while (cin.fail() == false)
	{
		cout << xh;
		++count;
		cin.get(xh);

	}
	cout << endl << count << " characters read\n";
	
}

void main514() {
	char xh;
	int count = 0;
	
	while ((xh = cin.get()) != EOF)
	{
		cout.put(char(xh));
		++count;
		cin.get(xh);

	}
	cout << endl << count << " characters read\n";

}

//249
