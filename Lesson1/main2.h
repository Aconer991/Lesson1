#pragma once
#include <iostream>
#include <string>
//#include <cstring>

using namespace std;

struct Point {
    //координаты дерева
    int x, y;
};

struct Tree {
    //создаем структуру данных
    string name;
    int age;
    bool is_alive;
    float height;

    Point place; // обращение к Point через переменную place

    //функция для вывода параметров
    void get_info() {
        cout << "Name: " << name << ".Age: " << age;
    }
};

void main02() {

    Tree dub; //создадим объект дуб
    dub.name = "Дуб"; //члены объекта
    dub.age = 24;
    dub.is_alive = true;



    dub.height = 15.5f;
    dub.place.x = 100;
    dub.place.y = 10;

    Tree baobab;
    baobab.name = "Баобаб";
    baobab.age = 30;
    baobab.is_alive = true;
    baobab.height = 25.0f;
    baobab.place.x = 50;
    baobab.place.y = 10;

     //cout << dub.name << " - " << dub.age;



     //cout << dub.name << " - " << baobab.place.x;
    dub.get_info(); // получить всю информацию
    baobab.get_info();
}

