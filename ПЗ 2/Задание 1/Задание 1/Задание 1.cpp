#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Введите размеры прямоугольника" << endl;
	int a, b, rez1, rez2;
	cin >> a;
	cin >> b;
	rez1 = a * b;
	rez2 = 2 * (a + b);
	cout << "Площадь прямоугольника = " << rez1 << endl;
	cout << "Периметр прямоугольника = " << rez2 << endl;
}