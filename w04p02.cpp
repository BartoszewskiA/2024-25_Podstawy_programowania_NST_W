#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    // plik.open("dane.txt", ios::out);
    plik.open("dane.txt", ios::app);
    plik << endl
         << "Tekst";
    plik.close();
    return 0;
}