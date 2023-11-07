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
	bool z;
	double a, x, y, beta, numerator, denominator;
	cout << "Завдання 4\n";

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

		cout << "Введіть значення A: ";
		cin >> a;

		cout << "Введіть значення X: ";
		cin >> x;

		cout << "Введіте значення beta: ";
		cin >> beta;
		cout << endl;

		if ((pow(x, 3) - a) <= 0)
		{
			cout << "Помилка: Логарифм повинен бути додатній." << endl;
		}

		if ((a + pow(x, 3)) < 0)
		{
			cout << "Помилка: Підкореневий вираз у чисельнику від'ємний." << endl;
		}

		if ((x + 1) < 0)
		{
			cout << "Помилка: Підкореневий вираз у знаменнику від'ємний." << endl;
		}
		else
		{
			denominator = pow(x, 4) + sqrt(x + 1) - pow(sin(beta), 2) + 0.9 * pow(10, 4) + 0.9 * a * x;
		}
		if (denominator == 0)
		{
			cout << "Помилка: Знаменник дорівнює нулю. Ділення на нуль недопустиме." << endl;
		}
		else
		{
			if (!((pow(x, 3) - a) <= 0 || (a + pow(x, 3)) < 0))
			{
				numerator = exp(3 * x) * tan(x + beta) - log10(pow(x, 3) - a) + pow(a + pow(x, 3), 1.0 / 5);
				double y = numerator / denominator;
				cout << "Значення Y: " << y << endl;
			}
		}
		
	}

	delete[] dynamicArray;

	cout << "\nВиконання четвертого завдання завершилося.\n\n";

	return 0;
}
