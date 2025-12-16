#pragma once
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void main011() {

//string cards[5] = { "aaa", "bbb", "cccc", "dddd", '\0' };
char cards[5] = { 'a', 'b', 'c', 'd', '\0' };
//int hand[4];

for (int i = 0; i < 5; i++) {
    cout << cards[i] << " ";
}
cout << endl;


}

void main012() {
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: \n";
    cin.getline(name, ArSize);
    cout << "Enter your favorite desert: \n";
    cin.getline(dessert, ArSize);
    
    cout << "I have some delicious" << dessert;
    cout << "for you, " << name << ".\n";

    //cin.getline(name, ArSize);
    //cout << ArSize;
}

void main013() {
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter 2 kind of feline: ";
    cin >> str1;
    cout << "Here are some felines: \n";
    cout << charr1 << " " << charr2 << ""
        << str1 << " " << str2  << endl;
    cout << "The third letter in " << charr2 << "is "
        << charr2[2] << endl;
    cout << "The third letter in " << str2 << "is "
        << str2[2] << endl;
}

void main014() {
    string s1 = "penguin";
    string s2, s3;

    cout << "Присваиваем один объект другому: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    cout << "Можно присвоить \n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;

    //конкатенация строк
    cout << "Можно сложить строки: s3 = s1 + s2\n";
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;

    // добавление строки
    cout << "Можно добавить строки.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += "for a day";
    cout << "s2 += \" for a day\"yields s2 = " << s2 << endl;

    s3 = s1 + s2;


}

struct inflatable
{
    char name[20];
    float volume;
    double price;
};


struct perks
{
    int key_number;
    char car[100];
} mr_smith, mr_jones;

int main015() {
    perks bar = {
        1000,
        "Pack",
    };

    mr_smith.key_number = 5001;           // меняем номер ключа
    mr_smith.car, "Mercedes";
    //strcpy(mr_smith.car, "Mercedes");

    inflatable guest = {
        "Glorious Gloria",
        1.88,
        29.99

    };
    inflatable pal =

    {
        "Audacions Arthur",
            3.12,
            32.99,
    };

    
    
    cout << "Expand your guest list with" << guest.name;
    cout << "and" <<pal.name <<"!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    cout << bar.key_number;   
    
    std:cout << "\nПосле изменения: " << mr_smith.key_number << ", " << mr_smith.car << endl;

    return 0;
}

