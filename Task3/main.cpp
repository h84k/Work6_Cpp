#include <iostream>
#include <cmath>
#include <locale>
#include <Windows.h>
using namespace std;

int main() {

#pragma region Ukranian
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Ukrainian");
#pragma endregion

    cout << "Практична робота №6 315a гр. Качанов Артем варіант 4" << endl << endl;

    int* dynamicArray = nullptr;
    int size, j = 1;
    float x, y;

    cout << "Завдання 3\n";

    cout << "Скільки перевірок ви бажаєте зробити? \nВаш вибір: ";
    cin >> size;

    dynamicArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = j++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\nПеревірка № " << dynamicArray[i] << endl << endl;

        cout << "Введіть значення х: ";
        cin >> x;

        cout << "Введіть значення y: ";
        cin >> y;

        if (abs(x) + abs(y) <= 1 || ((x * x) + (y * y) <= 1 && x <= 0))
        {
            cout << "Точка (" << x << ", " << y << ") знаходиться у вказаному проміжку." << endl;
        }
        else
        {
            cout << "Точка (" << x << ", " << y << ") не знаходиться у вказаному проміжку." << endl;
        }
    }

    delete[] dynamicArray;

    cout << "\nВиконання третього завдання завершилося.\n\n";

    return 0;
}
