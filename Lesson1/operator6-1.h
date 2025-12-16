

#include <iostream>
#include <string>
#include <cstdarg>
using namespace std;

//Прототип функции.
long summa(int, ...);

long summa(int k, ...);

inline void x7()
{
    cout << "\n summa(2,4,6)=" << summa(2, 4, 6);
    cout << "\n summa(6,1,2,3,4,5,6)=" << summa(6, 1, 2, 3, 4, 5, 6) << endl;
}

inline long summa(int k, ...)
{
    va_list args;
    va_start(args, k);

    long sm = 0;
    for (int i = 0; i < k; i++)
    {
        sm += va_arg(args, int);
    }

    va_end(args);
    return sm;
}