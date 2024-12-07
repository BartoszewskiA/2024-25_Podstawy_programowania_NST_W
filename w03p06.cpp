//palindrom

#include <iostream>
#include <string>


using namespace std;

int main()
{
    string wyraz;
    cout<<"Podaj wyraz: ";
    getline(cin,wyraz);
    for(int i=0;i<wyraz.length(); i++)
        cout<<wyraz[i];
    for (int i = wyraz.length()-1; i >=0; i--)
        cout << wyraz[i];

    return 0;
}