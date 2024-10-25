#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj nume dnia tygodnia: ";
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "Niedziela";
        break;
    case 2:
        cout << "Poniedzialek";
        break;
    case 3:
        cout << "Wtorek";
        break;
    case 4:
        cout << "Sodar";
        break;
    case 5:
        cout << "Czwartek";
        break;
    case 6:
        cout << "Piatek";
        break;
    case 7:
        cout << "Sobota";
        break;
    default:
        cout << "To ie jest numer dnia tygodnia";
    }
    return 0;
}