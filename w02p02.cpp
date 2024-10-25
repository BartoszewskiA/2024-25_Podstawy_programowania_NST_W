#include <iostream>

using namespace std;

int main()
{
    int tab[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "tab[" << i << "]=";
        cin >> tab[i];
    }

    for (int i = 0; i < 6; i++)
        cout << tab[i] << " ";
    return 0;
}