#pragma once
#include <iostream>
#include <string>

using namespace std;
class Building {
private:
	int year;
	string type;
public: //конструкторы должны быть в public
	Building(int y, string t) { //конструктор называется так же как класс
		year = y;  //установим те же параметры
		type = t;
	}
	Building(int y) { //новый конструктор только для второго объекта
		year = y;
		cout << "Данные установлены" << endl;
	}

public:
	void set_data(int y, string t) { //позволяет писать данные в строчку
		year = y;  //получаем данные
		type = t;
	}

	//void set_data(int year, string type) { 
	//	this->year = year;   //указатель, выбирает поле и устанавливает параметр year
	//	this->type = type;
	//}
public:   //модификатор доступа отовсюду, private только внутри класса, protected - доступны в классах наседниках
	void get_info() {
		cout << "Type" << type << ". Year: " << year << endl;
	}//функция вывода 

	~Building() { //деструктор, вызван 2 раза автоматически в момент выполнения кода
		cout << "Delete object" << endl;
	}
};