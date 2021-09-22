#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "Введите число " << endl;
	cin >> a;
	if (a % 2 == 0) cout << "четное число" << endl;
	else cout << "Нечетное число" << endl;
}
