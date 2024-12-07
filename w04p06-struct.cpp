#include <iostream>

using namespace std;
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };

int main()
{
    osoba ktos = {"AAAA", "BBBBBB", 30};
    ktos.imie = "Jan";
    ktos.nazwisko = "Kowalski";
    ktos.wiek = 30;

    cout << ktos.imie
         << " " << ktos.nazwisko
         << " " << ktos.wiek;
    return 0;
}