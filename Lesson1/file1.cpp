#include <iostream>
#include <windows.h>
#include <cstring>
#include <string>
#include "coordin.h"

using namespace std;
void main() {

	SetConsoleOutputCP(1251);     // дл€ вывода русских букв (cout)
	SetConsoleCP(1251);
	rect rplace;
	polar pplace;
	cout << "¬ведите значени€ x и y: ";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "¬вод следующих двух чисел (q дл€ завершени€): ";
	}
	cout << "Done.\n";
}
