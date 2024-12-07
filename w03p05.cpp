#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie_nazwisko;
    cout << "Przedstaw sie: ";
    //cin >> imie_nazwisko;
    getline(cin,imie_nazwisko);
    cout << "Witaj " << imie_nazwisko << "!\n";

    // cout<<imie_nazwisko.length();
    return 0;
}