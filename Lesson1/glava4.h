#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <array>
#include <cstring>


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 4996)


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

//структуры

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

   /* inflatable guests = {
        {"Bab". 0.5, 21},

    };*/
    inflatable pal =

    {
        "Audacions Arthur",
            3.12,
            32.99,
    };

    
    
    /*cout << "Expand your guest list with" << guest.name;
    cout << "and" <<pal.name <<"!\n";
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    cout << bar.key_number;   
    
    std:cout << "\nПосле изменения: " << mr_smith.key_number << ", " << mr_smith.car << endl;*/


    //int hiddens = 5;
    //int* pt = &hiddens;
    //cout << "Value hiddens = " << hiddens << "; Address of hiddens" "&hiddens" << endl;
    //cout << "Value of * pt = " << *pt
    //<< " ; Value of pt = "  << pt << endl;
    int nights = 1001;
    int* pt = new int;
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int";
    cout << "value = " << *pt << ": location = " << pt << endl;
    double* pd = new double;
    *pd = 10000001.0;
    cout << "double";
    cout << "value = " << *pd << ": location = " << pd << endl;
    // значение и расположение double
    cout << "location of pointer pd : " << &pd << endl;
        // распложение указателя pd
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;


    return 0;

    
}

void main016() {
    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << "and";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;
    delete[] p3;

   /* cout << "Now p3[0] is " << p3[0] << "and";
    cout << "p3[1] is " << p3[1] << ".\n";*/
}

struct antarctica_years_end
{
int year;
        //определение других нужных данных
};
//домашнее задание стр 196

void main018() {
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end* pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;
    const antarctica_years_end* arp[3] = { &s01, &s02, &s03 };

    std::cout << arp[1]->year << std::endl;
    const antarctica_years_end** ppa = arp;
    auto ppb = arp;

    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb+1))->year << std::endl;

}


void main019() {
    double a1[4] = { 1.2, 2.4, 3.6, 4.8 };

    //vector<double> a2(4);
    
    array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };

    array<double, 4> a4;
    a4 = a3;

}

//проблемное задание стр 185

void main020() {
    char animal[20] = "bear";
    const char* bird = "wren";
    char* ps;
    //cout << ps;
    cout << bird << "\n";

    cout << "Enter a kind of animal";
    cin >> animal;

    cout << animal;
    ps = animal;
    cin >> ps; // может быть опасно
    cout << animal;
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy: ()\n";
    cout << animal << "at" << (int*)animal << endl;
    cout << ps << "at " << (int*)ps << endl;
    //ps = new char[strlen(animal) + 1];
    //strcpy(ps, animal);
    //cout << "After using stcpy(): \n";
    //cout << animal << "at " << (int*)animal << endl;
    //cout << ps << "at " << (int*)ps << endl;
    //delete[] ps;
}

    int  main59() {
        char  animal[20] = "bear";
        const  char* bird = "wren"; 
        char* ps;
        cout << animal << "  and  " << bird << '\n';
        //cout << ps << '\n'; 
        cout << "enter  a  kind  of  animal:  ";
        cin >> animal;

        //cin >> ps;
        ps = animal;
        cout << ps << '\n' << "before  using  strcpy():\n" << animal << "  at  " << (int*)ps << '\n'; cout << ps << "  at  " << (int*)ps << '\n'; 
        ps = new  char[strlen(animal) + 1];
        strcpy(ps, animal);
        cout << "after  using  strcpy():\n" << animal << "  at  " << (int*)animal << '\n' << ps << "  at  " << (int*)ps << '\n'; 
        delete[]  ps;
        return  0;
   }


  

  
 void main022 () {
     inflatable* ps = new inflatable;
     cout << "Enter name of inflatable item: ";
     cin.get(ps->name, 20);     
     cout << "Enter volume in cubic feet: ";
     cin >> (*ps).volume;
     cout << "Enter price: $";
     cin >> ps->price;
     cout << "Name: " << (*ps).name << endl;
     cout << "Volume: " << ps->volume << "cubic feet\n";
     cout << "Price: $" << ps->price << endl;
     delete ps;

  }


//пример использования new и delete
 char * getname(void);
 void main023() {
     char* name;
     name = getname();
     //cin >> name;
     cout << name << " at" << (int*)name << "\n";
     delete[] name;
     name = getname();
     //cin >> name;
     cout << name << " at" << (int*)name << "\n";
     delete[] name;
 }

 char* getname()
 {
     char temp[80];
     cout << "Enter last name";
     cin >> temp;
     char* pn = new char[strlen(temp) + 1];
     strcpy(pn, temp);
     return pn;
 }



 std::string getname2()
 {
     std::string name;
     std::cout << "Enter last name: ";
     std::cin >> name;                 // безопасный ввод любой длины
     return name;                       // возврат по значению — автоматически копируется/перемещается
 }

 int  main0231()
 {
     //cовременный способ
     // Первый ввод
     auto name1 = getname2();
     std::cout << name1 << " at " << &name1[0] << "\n";
     // или просто: std::cout << name1 << "\n";

     // Второй ввод
     auto name2 = getname();
     std::cout << name2 << " at " << &name2[0] << "\n";

     // Никакого delete не нужно — std::string сама управляет памятью!
     return 0;
 }


 //сравнение массивов, объектов vector и объектов array

 void main024 () {
     double a1[4] = { 1.2, 2.4, 3.6, 4.8 };

     vector<double> a2(4);

     a2[0] = 1.0 / 3.0;
     a2[1] = 1.0 / 5.0;
     a2[2] = 1.0 / 7.0;
     a2[3] = 1.0 / 9.0;

     array<double, 4> a3 = { 3.14, 2.72, 1.62, 1.41 };
     array<double, 4> a4;
     a4 = a3;

     cout << "a1[2]: " << a1[2] << "at " << &a1[2] << endl;
     cout << "a2[2]: " << a2[2] << "at " << &a2[2] << endl;
     cout << "a3[2]: " << a3[2] << "at " << &a3[2] << endl;
     cout << "a4[2]: " << a4[2] << "at " << &a4[2] << endl;

     a1[-2] = 20.2;
     cout << "a1 [-2]:" << a1[-2] << "at " << &a1[-2] << endl;
     cout << "a3 [2]:" << a3[2] << "at " << &a3[2] << endl;
     cout << "a4 [2]:" << a4[2] << "at " << &a4[2] << endl;

}


