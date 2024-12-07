#include <iostream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

void wypisz(osoba ktos);

int main()
{

    osoba ktos = {"AAAA", "BBBBBB", 30};
    return 0;
}

void wypisz(osoba ktos)
{
    cout << ktos.imie
         << " " << ktos.nazwisko
         << " " << ktos.wiek;
}