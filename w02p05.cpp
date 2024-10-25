#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
        // cout << rand() % 6 +1 << "\t";
        cout << rand() % 201 - 100 << "\t";
    return 0;
}