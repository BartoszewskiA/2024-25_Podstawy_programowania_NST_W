#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int ile;
    cout << "Ile liczb wylosować: ";
    cin >> ile;
    int tab[10000];
    for (int i = 0; i < ile; i++)
    {
        tab[i] = rand() % 201 - 100; // <a;b>  rand()%(b-a+1)+a;
    }
    int suma = 0;
    for (int i = 0; i < ile; i++)
    {
        suma += tab[i];
    }
    cout << "Srednia =" << (double)suma / ile;
    return 0;
}