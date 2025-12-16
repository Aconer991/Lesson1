#pragma once
#include <iostream>
#include <string>
using namespace std;


//класс, указатель на который
//будет инкапсулирован
class Temp
{
	int TEMP;
public:
	//конструктор
	Temp() { TEMP = 25; }
	//функция показа на экран
	void TempFunction() {
		cout << "TEMP = " << TEMP << "\n\n";
	}
	//функция установки значения
	void TempSet(int T) {
		TEMP = T;
	}
};
//класс, инкапсулирующий указатель
class SmartPointer
{
	//указатель на класс Temp
	Temp* ptr;
	//счетчик копий
	int count_copy;

public:
	//конструктор
	SmartPointer(Temp* p = NULL) {
		count_copy = 0;
		ptr = p;
	}

	SmartPointer(const SmartPointer&obj) {
		//создается копия - увеличиваем счетчик
		ptr = obj.ptr;
		count_copy++;
	}

	SmartPointer operator=(const SmartPointer&obj) {
		//создается копия - увеличиваем счетчик
		ptr = obj.ptr;
		ptr = obj.ptr;
		count_copy++;
		//возвращаем сам объект для ситуации a=b=c
		return *this;
	}

	//уничтожение объекта
	~SmartPointer() {
		if (ptr != NULL && count_copy == 0) {
			cout << "\n~Delete Object\n";
			//уничтожаем объект
			delete[]ptr;
		}

		else {
			//уменьшаем счетчик
			count_copy--;
			cout << "\n~Delete Copy\n";
		}
	}
	//перегрузка селектора
	
	Temp* operator->() {
		return ptr;
	};
	//Оператор селектора ->
	//который позволит обратиться
	//напрямую к "спрятанному"
	//указателю
	
	
};
void x6()
{
	//создание нового объекта
	Temp* main_ptr = new Temp;
	//простое обращение к членам
	//объекта через "родной" указатель
	SmartPointer PTR(main_ptr);
	//проверяем работу умного указателя
	PTR->TempSet(100);
	PTR->TempFunction();
	//создание объекта класса-указателя
	SmartPointer PTR2 = PTR;

	Temp* arr_ = new Temp[3];
	
	/*TEMP = 100
	~Delete Copy
	~Delete Object*/
}

