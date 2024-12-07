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
    osoba tab[100];

    tab[0].imie = "Jan";
    tab[0].nazwisko = "Kowalski";
    tab[0].wiek = 40;

    cout << tab[0].imie << " " << tab[0].nazwisko << " " << tab[0].wiek;
    return 0;
}