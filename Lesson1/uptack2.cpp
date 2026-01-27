#pragma once
#include <iostream>
#include <string>

class Integer2
{
public:
    Integer2(int number)
    {
        value = number;
    }
    friend int compare(const Integer2& obj1, const Integer2& obj2);

    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};
// определяем реализацию для дружественной функции
int compare(const Integer2& obj1, const Integer2& obj2)
{
    return obj1.value - obj2.value;
}

void print(const Integer2& num1, const Integer2& num2)
{
    auto result = compare(num1, num2);
    if (result > 0)
    {
        std::cout << "num1 greater than num2" << std::endl;
    }
    else if (result < 0)
    {
        std::cout << "num1 less than num2" << std::endl;
    }
    else
    {
        std::cout << "num1 is equal to num2" << std::endl;
    }
}
void main3()
{
    print(Integer2{ 10 }, Integer2{ 20 });  // num1 less than num2
    print(Integer2{ 30 }, Integer2{ 20 });  // num1 greater than num2
    print(Integer2{ 10 }, Integer2{ 10 });  // num1 is equal to num2
}