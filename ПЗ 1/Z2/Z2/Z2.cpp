#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c, rez;
	cout << "Введите число:" << endl;
	cin >> rez;
	a = rez % 10;
	b = rez / 10 % 10;
	c = rez / 100;
	cout << (a + b + c) / 3.0 << endl;
	return 0;
}
