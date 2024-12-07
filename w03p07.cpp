// palindrom

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string tab[] = {"ABCD", "abcd", "1234"};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < tab[i].length(); j++)
            cout << tab[i][j] << ".";
        cout << endl;
    }

    return 0;
}