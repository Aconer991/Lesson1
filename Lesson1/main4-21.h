
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	int age; 
	string name;
public: 
	friend void info_car(Car& car, Person& person)
	//void info_car(Car &car, Person &person) {  //выводим информацию о пользователе и его машине
	//	cout << "Человек с именем" << person.name << "имеет машину" << car.name <<endl; //метод закрыт
	//}
};


void info_car(Car &car, Person &person) {  //выводим информацию о пользователе и его машине
	cout << "Человек с именем" << person.name << "имеет машину" << car.name <<endl; //метод закрыт
}

class Car {
private: 
	string name;
public:
	void info_car(Car& car, Person& person) {  //выводим информацию о пользователе и его машине
		cout << "Человек с именем" << person.name << "имеет машину" << car.name << endl; //метод закрыт
	}

};