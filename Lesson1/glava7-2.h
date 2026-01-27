
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <span>
#include <array>

using namespace std;

const int Seasons = 4;
const std::array<std::string, Seasons> Snames =
{ "Spring", "Summer", "Fall", "Winter" };

void fill(std::array<double, Seasons>* pa);

void show(std::array<double, Seasons>da);
void main710()
{
	std::array<double, Seasons>expenses;
	fill(&expenses);
	show(expenses);
}

void fill(std::array<double, Seasons>* pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter" << Snames[i] << "expenses: ";
		cin >> (*pa)[i];
	}
}

void show(std::array<double, Seasons> da)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}


int main711()
{
    // 1. Современный фиксированный массив (предпочтительнее int arr[100])
    std::array<int, 5> a = { 10, 20, 30, 40, 50 };

    // 2. Самый универсальный и популярный вариант
    std::vector<int> v = { 1, 2, 3 };
    v.push_back(4);           // размер растёт автоматически
    v.resize(10);             // можно менять размер
    v.reserve(100);           // оптимизация (избежать перевыделений)

    

    // 4. Старый стиль (лучше избегать в новом коде)
    int old[6] = { 1,2,3,4,5,6 };

    // 5. Динамический массив "вручную" — почти никогда не используйте
    // int* ptr = new int[100];
    // delete[] ptr;           // ← легко забыть / утечка памяти
}

int main711() {
    // Создаём массив (vector)
    std::vector<int> numbers = { 7, 2, 8, 1, 5 };

    // 1. Вывод всех элементов
    std::cout << "Все элементы:\n";
    for (int x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    // 2. Вывод по индексам
    std::cout << "Элемент с индексом 0: " << numbers[0] << "\n";
    std::cout << "Элемент с индексом 3: " << numbers[3] << "\n\n";

    // 3. Изменение элемента
    numbers[2] = 100;
    std::cout << "После изменения numbers[2]:\n";
    for (int x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    // 4. Добавление элемента в конец
    numbers.push_back(99);  
    std::cout << "После push_back(99):\n";
    for (int x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    // 5. Количество элементов
    std::cout << "Размер массива: " << numbers.size() << " элементов\n";

    return 0;
}

int main712()
{
    std::vector<int> v = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

    // Вариант 1: цикл + индексы (самый универсальный)
    std::cout << "Элементы с 2 по 6 (не включая 6):\n";
    for (size_t i = 2; i < 6; ++i) {
        std::cout << v[i] << " ";
    }
    std::cout << "\n\n";

}

//замена элементов по индексу

int main713()
{
    std::vector<int> v = { 1, 2, 3, 4, 5 };

    // Способ 1: оператор [] — быстро, без проверки границ
    v[2] = 100;
    std::cout << "v[2] = 100 → ";
    for (int x : v) std::cout << x << " ";   // 1 2 100 4 5
    std::cout << "\n";

    // Способ 2: .at() — с проверкой границ (бросает исключение при ошибке)
    try {
        v.at(7) = 999;           // ← выйдет за границы → std::out_of_range
    }
    catch (const std::out_of_range&) {
        std::cout << "Ошибка: индекс за пределами\n";
    }

    // std::array — аналогично
    std::array<int, 5> a = { 10, 20, 30, 40, 50 };
    a[1] = 200;
    std::cout << "a[1] = 200 → ";
    for (int x : a) std::cout << x << " ";
    std::cout << "\n";
}

int main714()
{
    std::vector<int> v = { 10, 20, 30, 40, 50, 60, 70 };

    // 1. Удаление с конца (самое быстрое)
    v.pop_back();                      // удаляет 70
    std::cout << "После pop_back: ";
    for (int x : v) std::cout << x << " ";   // 10 20 30 40 50 60
    std::cout << "\n";

    // 2. Удаление по индексу (erase)
    v.erase(v.begin() + 2);            // удаляет элемент с индексом 2 (30)
    std::cout << "После erase индекс 2: ";
    for (int x : v) std::cout << x << " ";   // 10 20 40 50 60
    std::cout << "\n";

    // 3. Удаление первого вхождения определённого значения
    auto it = std::find(v.begin(), v.end(), 50);
    if (it != v.end()) {
        v.erase(it);
    }
    std::cout << "После удаления 50: ";
    for (int x : v) std::cout << x << " ";   // 10 20 40 60
    std::cout << "\n";

    // 4. Удаление всех элементов с определённым значением (erase-remove idiom)
    v = { 1, 2, 2, 3, 2, 4, 2 };
    v.erase(std::remove(v.begin(), v.end(), 2), v.end());
    std::cout << "После удаления всех 2: ";
    for (int x : v) std::cout << x << " ";   // 1 3 4
    std::cout << "\n";

    // 5. Полная очистка
    v.clear();
    std::cout << "После clear → размер = " << v.size() << "\n";
}