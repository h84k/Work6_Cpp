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
    char ch;

    cout << "�������� 2\n";

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

        cout << "������ ������: ";
        cin >> ch;

        switch (ch)
        {
        case 'a':
        case 'e':
            cout << "\n������ '" << ch << "' �������� �� ����� �������� ����." << endl;
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'v':
        case 'x':
            cout << "\n������ '" << ch << "' �������� �� ����� ����������� ����." << endl;
            break;
        case '.':
        case ',':
        case ':':
            cout << "\n������ '" << ch << "' �������� �� ����� ����� ����������." << endl;
            break;
        default:
            cout << "\n�������� ������ �� �������� �� ����� � ���������� ����." << endl;
        }

    }

    delete[] dynamicArray;

    cout << "\n��������� ������� �������� �����������.\n\n";

    return 0;
}
