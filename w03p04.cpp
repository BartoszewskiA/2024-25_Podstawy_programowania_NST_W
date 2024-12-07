#include <iostream>

using namespace std;

void wypisz(int tab[], int n);
void zwieksz(int tab[], int n);

int main()
{
    int tab1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n1 = 10;
    int tab2[] = {101, 102, 103, 104, 105};
    int n2 = 5;
    wypisz(tab1, n1);
    wypisz(tab2, n2);
    zwieksz(tab1, n1);
    zwieksz(tab2, n2);
    wypisz(tab1, n1);
    wypisz(tab2, n2);
    return 0;
}

void wypisz(int tab[], int n)
{
    cout << "\n----------------------------------------\n";
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << "\n----------------------------------------";
}

void zwieksz(int tab[], int n)
{
    for (int i = 0; i < n; i++)
        tab[i]++;
}