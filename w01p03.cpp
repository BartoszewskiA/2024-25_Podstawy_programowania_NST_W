#include <iostream>

using namespace std;

int main()
{
    int a, b;
    double wynik;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (b == 0)
    {
        cout << "Nie dziel przez zero";
    }
    else
    {
        wynik = (double)a / b;
        cout << "wynik=" << wynik;
    }

    return 0;
}