#include <iostream>
#include "math.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int n, i, k;
    bool prost = true;
    cout << "Введите число"<<endl;
    cin >> n >> k; cout << endl;
    for (i = 2; i <= (sqrt(abs(n))); i++) 
    {
        if (n % i == 0)
        {
            prost = false;
            break;
        }
    }
    if (prost)
        cout << "Первое простое число\n";
    else
        cout << "Первое не простое число\n";
    for (i = 2; i <= (sqrt(abs(k))); i++) 
    {
        if (k % i == 0)
        {
            prost = false;
            break;
        }
    }
    if (prost)
        cout << "Второе число простое\n";
    else
        cout << "Второе число не простое\n";



    int n1, n2, max;
    n1 = n; 
    n2 = k;

    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 & max % n2 == 0)
        {
            cout << "НОК = " << max; 
            break;
        }
        else
            ++max;
    } while (true);

    return 0;



}
