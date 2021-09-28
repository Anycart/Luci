#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	setlocale(LC_ALL, "RUS");
	cout << "Введите диапазон чисел" << endl;
	cin >> a;
	cin >> b; 
	cout << "-----------------------------------------------------------------------------" << endl;
		srand(time(0));
		for (int i = 0; i < 20; i++)
			cout << rand() % (b - a + 1) + a << endl;
		return 0;
}



