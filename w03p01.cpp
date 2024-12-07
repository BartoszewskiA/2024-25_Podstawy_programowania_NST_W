#include <iostream>

using namespace std;

void przywitaj_sie();
int dodaj(int x, int y);

int main()
{
    przywitaj_sie();
    cout<< "wynik = "<<dodaj(2,2);
    return 0;
}

void przywitaj_sie()
{
    cout<<"Czesc to ja funkcja"<<endl;
    return;  //opcjonalnie
}

int dodaj(int x, int y)
{
    int wynik = x+y;
    return wynik;
}
