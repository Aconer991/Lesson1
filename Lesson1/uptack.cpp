#pragma once
#include <iostream>
#include <string>


using namespace std;

class Integer
{
public:
    Integer(int number)
    {
        value = number;
    }
    int compare(const Integer& obj) const
    {
        return value - obj.value;
    }
    void print() const
    {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

void print(const Integer& num1, const Integer& num2)
{
    auto result = num1.compare(num2);
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
void main2()
{
    print(Integer{ 10 }, Integer{ 20 });  // num1 less than num2
    print(Integer{ 30 }, Integer{ 20 });  // num1 greater than num2
    print(Integer{ 10 }, Integer{ 10 });  // num1 is equal to num2
    
}