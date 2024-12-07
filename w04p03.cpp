#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("dane.txt", ios::out);
    string s;
    while(1)
    {
        cout << " : ";
        getline(cin, s);
        if(s=="") break;
        plik << s
             << endl;
    }

    plik.close();
    return 0;
}