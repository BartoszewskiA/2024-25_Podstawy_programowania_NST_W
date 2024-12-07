#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int MAKS = 6;

int main()
{
    fstream plik;
    int liczba_uruchomien;
    plik.open("w04p05.log", ios::in);
    if (plik.good())
    {
        string s;
        getline(plik, s);
        liczba_uruchomien = stoi(s);
        plik.close();
    }
    else
    {
        liczba_uruchomien = 0;
    }

    liczba_uruchomien++;
    if(liczba_uruchomien> MAKS)
    {
        cout<<"Kup pelna wersje";
        return 0;
    }
    cout << "Program byl otwierany " << liczba_uruchomien << " razy";

    plik.open("w04p05.log", ios::out);
    plik << liczba_uruchomien;
    plik.close();

    return 0;
}