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
    int suma = 0;
    int x;
    while (!plik.eof())
    {
        getline(plik, s);
        cout << s << " ";
        if(s!="")
        {
            x = stoi(s);
            suma += x;
        }
        // try
        // {
        //     x = stoi(s);
        //     suma += x;
        // }
        // catch (const std::exception &e)
        // {
        // }
    }
    cout << endl
         << "suma=" << suma;

    plik.close();
    return 0;
}