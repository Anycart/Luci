#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int de, i, dv;
    i = 2;
    cout << "Введите число"<< endl;
    cin >> de;
    int dvo[200];
    int t = 0;
    while (de > 1)
    {
        dv = de % i;
        dvo[t] = dv;
        de /= i;
        t++;
    }
    t--;
    cout << "Результат = ";
    cout << 1;
    while (t >= 0)
    {
        cout << dvo[t];
        t--;
    }
    cout << endl;
    return 0;
}
