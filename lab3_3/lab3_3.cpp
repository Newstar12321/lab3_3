#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const double a = 0.003, b = 2.5;
    int x;
    cout << "Введите переменную x: ";
    cin >> x;
    if (x <= -6)
    {
        cout << "y = " << pow(M_E, x) + pow(x, 2);
    }
    else if (x > 5)
    {
        cout << "y = " << (1 + a) / (1 + x);
    }
    else
    {
        cout << "y = " << pow(M_LN10, 2) * abs(b * x);
    }
}