#include <iostream>

using namespace std;

int main()
{
    int ile;
    cout<<"Ile liczb wczytać: ";
    cin>>ile;
    
    int tab[1000];
    for (int i = 0; i < ile; i++)
    {
        cout << "tab[" << i << "]=";
        cin >> tab[i];
    }

    for (int i = ile-1; i >= 0; i--)
        cout << tab[i] << " ";
    return 0;
}