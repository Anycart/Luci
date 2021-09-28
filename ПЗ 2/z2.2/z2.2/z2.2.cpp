#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int n, a1, a2, a3, i; a1 = 0; a2 = 1;
	cout << "Введите номер "; cin >> n;
	if (n < 0) cout << "Некорректный ввод\n";
	else {
	 if (n == 0) cout << n; 
	  else
		if (n == 1) cout << n - 1, n;
		else {
			cout << " 0 1";
			for (i = 2; i < n; i++)
			{
			 cout << " ", a3 = a1 + a2;
			 cout << a3;
					a1 = a2;
					a2 = a3;
				}

				cout << endl;
			}

		int f; i = 1; f = 1;


		while (i < n) {
			f = f * ++i;
		}

		cout << "factorial = " << f;

	}
}