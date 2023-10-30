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
    double a = 0, x = 0, y = 0;
    cout << "�������� 1\n";

    cout << "\n������ �������� �� ������ �������? \n��� ����: ";
    cin >> size;

    dynamicArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        dynamicArray[i] = j++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\n�������� � " << dynamicArray[i] << endl << endl;

        cout << "������ �������� x: ";
        cin >> x;
        cout << "������ �������� a: ";
        cin >> a;

        if (x < a)
        {
            y = a - sqrt(a * a - (x - a) * (x - a)); //� ����-����� ������� ����������� ����� ���� ����'�����
        }
        else
        {
            y = a * pow(x - a, 3.0 / 2.0);
        }
        cout << "\n�������� ������� Y: " << y << endl;
    }


    delete[] dynamicArray;

    cout << "\n��������� ������� �������� �����������.\n\n";

    return 0;
}
