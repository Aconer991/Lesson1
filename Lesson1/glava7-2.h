
#include <iostream>
#include <string>
#include <cstring>


using namespace std;

const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
{ "Spring", "Summer", "Fall", "Winter" };

void fill(std::array<double, Seasons>* pa);

void show(std::array<double, Seasons>da);
void main710()
{
	std::array<double, Seasons>expenses;
	fill(&expenses);
	show(expenses);
}

void fill(std::array<double, Seasons>* pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter" << Snames[i] << "expenses: ";
		cin >> (*pa)[i];
	}
}

void show(std::array<double, Seasons> da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}