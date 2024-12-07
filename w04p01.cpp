#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout << "Blad pliku";
        return 0;
    }
    string s;
    while (!plik.eof())
    {
        getline(plik, s);
        cout << s << endl;
    }

    plik.close();

    return 0;
}