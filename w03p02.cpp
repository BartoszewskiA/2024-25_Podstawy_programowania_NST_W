#include <iostream>

using namespace std;
void zwieksz_o_10(int &x);
int zwieksz_v2(int x = 0);

int main()
{
    int x = 100;
    zwieksz_o_10(x);
    // x = zwieksz_v2(x);
    cout << "Po zwiekszenie: " << x;
    return 0;
}

void zwieksz_o_10(int &x)
{
    x = x + 10;
}

int zwieksz_v2(int x)
{
    return x + 10;
}