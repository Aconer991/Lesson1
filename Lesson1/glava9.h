

#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include "coordin.h"


//иллюстрация области видимости автоматических переменных
void oil(int x);

void  main901() {
	int texas = 31;
	int year = 2011;
	cout << "In main(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "In main(), year = " << year << ", &year = ";
	cout << &year << endl;
	oil(texas);
	cout << "In main(), texas = " << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "In main(), year = " << year << ", &year = ";
	cout << &year << endl;

}

void oil(int x) {
	int texas = 5;
	cout << "In oil(), texas=" << texas << ", &texas = ";
	cout << &texas << endl;
	cout << "In oil(). x = " << x << ", &x = ";
	cout << &x << endl;
	{
		int texas = 113;
		cout << "In block, texas = " << texas;
		cout << ", &texas = " << &texas << endl;
		cout << "In block, x = " << x << ", &x = ";
		cout << &x << endl;
	}

	cout << "Post-block texas = " << texas;
	cout << ", &texas = " << &texas << endl;
 }




using namespace std;

//struct rect {
//	double x;
//	double y;
//};
//
//struct polar {
//	double distance;
//	double angle;
//};
//
//
//polar rect_to_polar(rect xypos) {
//	polar answer;
//	answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	return answer;
//}
//
//void show_polar(polar dapos) {
//	const double Rad_to_deg = 57.29577951;
//	cout << "дистанция = " << dapos.distance;
//	cout << ", угол = " << dapos.angle * Rad_to_deg;
//	cout << " градусов\n";
//}
//
//
//int main900() {
//	rect  rplace;
//	polar pplace;
//
//	cout << "Введите значения x и y: ";
//
//	while (cin >> rplace.x >> rplace.y) {
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//
//		cout << "Ввод следующих двух чисел (Ctrl+Z или Ctrl+D для завершения): ";
//	}
//
//	cout << "\nDone.\n";
//	return 0;
//}



#include <stack>
#include <iostream>

void main903() {
	std::stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	std::cout << st.top() << "\n";    // 30
	st.pop();
	std::cout << st.top() << "\n";    // 20

	std::cout << "Размер: " << st.size() << "\n";   // 2
}


