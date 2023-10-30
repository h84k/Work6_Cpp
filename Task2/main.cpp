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
    char ch;

    cout << "Завдання 2\n";

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

        cout << "Введіть символ: ";
        cin >> ch;

        switch (ch)
        {
        case 'a':
        case 'e':
            cout << "\nСимвол '" << ch << "' належить до групи голосних літер." << endl;
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'v':
        case 'x':
            cout << "\nСимвол '" << ch << "' належить до групи приголосних літер." << endl;
            break;
        case '.':
        case ',':
        case ':':
            cout << "\nСимвол '" << ch << "' належить до групи знаків пунктуації." << endl;
            break;
        default:
            cout << "\nВведений символ не належить до жодної з визначених груп." << endl;
        }

    }

    delete[] dynamicArray;

    cout << "\nВиконання другого завдання завершилося.\n\n";

    return 0;
}
