#include <iostream>

using namespace std;

const int WIERSZE = 15;
const int KOLUMNY = 15;

int main()
{
    int tab[KOLUMNY][WIERSZE];

    for (int i = 0; i < KOLUMNY; i++)
    {
        for (int j = 0; j < WIERSZE; j++)
            tab[i][j] = (i + 1) * (j + 1);
    }
    for (int i = 0; i < KOLUMNY; i++)
    {
        for (int j = 0; j < WIERSZE; j++)
            cout << tab[i][j] << "\t";
        cout << endl;
    }

    return 0;
}