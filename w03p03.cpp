#include <iostream>

using namespace std;
void licznik();

int main()
{
    for (int i = 0; i < 10; i++)
        licznik();
    return 0;
}

void licznik()
{
    static int l = 0;
    cout << ++l << endl;
}
