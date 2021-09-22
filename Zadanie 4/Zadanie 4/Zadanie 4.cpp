#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер месяца" << endl;
	int month;
	cin >> month;
	switch (month)
	{
	case 12:
	case 1:
	case 2: cout << "Зима"; break;
	case 3:
	case 4:
	case 5: cout << "Весна"; break;
	case 6:
	case 7:
	case 8: cout << "Лето"; break;
	case 9:
	case 10:
	case 11: cout << "Осень"; break;
	default: cout << "Такого месяца нет" << endl;
	}
}