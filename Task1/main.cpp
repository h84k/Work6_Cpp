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
    double a = 0, x = 0, y = 0;
    cout << "Завдання 1\n";

    cout << "\nСкільки перевірок ви бажаєте зробити? \nВаш вибір: ";
    cin >> size;

    dynamicArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = j++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\nПеревірка № " << dynamicArray[i] << endl << endl;

        cout << "Введіть значення x: ";
        cin >> x;
        cout << "Введіть значення a: ";
        cin >> a;

        if (x < a)
        {
            y = a - sqrt(a * a - (x - a) * (x - a)); //У будь-якому випадку підкореневий вираз буде невід'ємний
        }
        else
        {
            y = a * pow(x - a, 3.0 / 2.0);
        }
        cout << "\nЗначення функції Y: " << y << endl;
    }


    delete[] dynamicArray;

    cout << "\nВиконання першого завдання завершилося.\n\n";

    return 0;
}
