#pragma once
#include <iostream>
#include <string>

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

