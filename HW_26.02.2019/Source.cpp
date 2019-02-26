#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>

using namespace std;

// 1.	**Реализовать 3 функции каждая из которых принимает вещественное число и возвращает вещественное число.
// Первая функция вычисляет квадратный корень числа, вторая – куб числа, третья – синус числа.
// В главной функции создайте массив из 3 - х указателей на эти функции.
// Добавьте меню, в котором пользователь может выбрать желаемую операцию.
// Напишите программу без использования операторов if и switch.

double sq(double x) {
	double y = sqrt(x);
	return y;
}
double cube(double x) {
	double y = x * x*x;
	return y;
}
double sinus(double x) {
	double y = sin(x);
	return y;
}

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	double(*functions[3])(double) = { sq, cube, sinus };
	int choice, number ;

	while (true)
	{
		cout << "Введите 0, чтобы получить квадратный корень числа" << endl;
		cout << "Введите 1, чтобы получить куб числа" << endl;
		cout << "Введите 2, чтобы получить синус числа" << endl;
		cout << "Введите -1 для выхода" << endl;
		cin >> choice;

		if (choice == -1) break;
		else if (choice < 0 || choice >2) cout << "Try again!" << endl;
		else
		{
			cout << "Enter a number" << endl;
			cin >> number;
			cout << functions[choice](number) << endl;
		}
	}


	system("pause");
	return 0;
}