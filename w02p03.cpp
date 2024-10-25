#include <iostream>

using namespace std;

const int ILE = 9;
int main()
{
    int tab[ILE];
    for (int i = 0; i < ILE; i++)
    {
        cout << "tab[" << i << "]=";
        cin >> tab[i];
    }

    for (int i = 0; i < ILE; i++)
        cout << tab[i] << " ";
    return 0;
}