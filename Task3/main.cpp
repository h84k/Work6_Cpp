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

    cout << "��������� ������ �6 315a ��. ������� ����� ������ 4" << endl << endl;

    int* dynamicArray = nullptr;
    int size, j = 1;
    float x, y;

    cout << "�������� 3\n";

    cout << "������ �������� �� ������ �������? \n��� ����: ";
    cin >> size;

    dynamicArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = j++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\n�������� � " << dynamicArray[i] << endl << endl;

        cout << "������ �������� �: ";
        cin >> x;

        cout << "������ �������� y: ";
        cin >> y;

        if (abs(x) + abs(y) <= 1 || ((x * x) + (y * y) <= 1 && x <= 0))
        {
            cout << "����� (" << x << ", " << y << ") ����������� � ��������� �������." << endl;
        }
        else
        {
            cout << "����� (" << x << ", " << y << ") �� ����������� � ��������� �������." << endl;
        }
    }

    delete[] dynamicArray;

    cout << "\n��������� �������� �������� �����������.\n\n";

    return 0;
}
