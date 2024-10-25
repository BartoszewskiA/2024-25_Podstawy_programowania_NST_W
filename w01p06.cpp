#include <iostream>

using namespace std;

int main()
{
    int x, suma = 0;

    do
    {
        cout << "x=";
        cin >> x;
        suma = suma + x;
    } while (x != 0);
    cout << "Suma = " << suma;
    return 0;
}