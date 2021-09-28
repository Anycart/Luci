#include <iostream>
#include "math.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int a, b, i=0, s=0, m;
	cout << "Введите Первую сторону прямоугольника ";
	cin >> a;
	cout << "Введите Вторую сторону прямоугольника ";
	cin >> b;
	while (s < a)
	{

		while (i < b)
		{
			cout << "*";
			++i;
		}
		i = 0;
		cout << endl;
		s = s + 1;

	}
	m = a * b;
	cout << "площадь равна = ";
	cout << m;
	return 0;
}
