#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
enum Options {    // создание перечисления
    open = 10,
    close = 8,
    wait = 4,
    del = 2
};

struct File {
    int weight;
    string name;
    //string options = "close";
    Options options;
};



void main03() {
    //перечисления
    File my_file; //создаем объект на основе структуры my_file
    my_file.weight = 1.5f;
    my_file.name = "test.txt";
    my_file.options = Options::close; //обращаемся к перечислению и выбираем вариант
    
    cout << my_file.options; //порядковый номер начиная с 0 либо число после =

    //std::cout << "Otsions: " << static_cast<int>(open) << std::endl;
    if (my_file.options == Options::close)
        cout << "File is close" << endl;

}



void files() {
    //создание файла
    //ofstream file("test.txt", ios_base::out);  //создаем объект на основе класса ofstream
    ////ios - открываем файл
    //if (file.is_open()) {
    //    file << "Hello World"; // записать текст в файл
    //    file.close();
    //}


    ifstream file("test.txt");
    if (file.is_open()) {
        //tring temp; // создание переменной
        //file >> temp; // считываем строку из файла и записываем в переменную
        char temp[100]; //создать массив строк 100 символов
        file.getline(temp, 100); //считываем первые 100 символов
        cout << temp << endl;
        file.close();
    }
}



 //void theme20() {
 //    Building school(2000, "Школа"); //при создании объектов вызывается класс
 //    school.get_info();

 //    Building house(2010); //Только один параметр
 //    house.get_info();
 // }