#include <iostream>
using namespace std;

int main()
{   

    string imie, nazwisko;
    void Przywitanie(int imie, int nazwisko);
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoje nazwisko: ";
    cin >> nazwisko;
    Przywitanie(imie,nazwisko);
    return Przywitanie;
}