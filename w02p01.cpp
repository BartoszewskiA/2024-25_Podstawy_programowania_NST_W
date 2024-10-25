#include <iostream>

using namespace std;

int main()
{
    int x, suma = 0;

    while(1)  //while(true)
    {
        cout << "x=";
        cin >> x;
        if (x < 0)
            break;
        suma = suma + x;
    }
    cout << "Suma = " << suma;
    return 0;
}