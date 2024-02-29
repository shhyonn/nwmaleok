#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void losuj_liczby(int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = rand() % 51; 
    }
}


bool sprawdz_zgadniecie(int liczba, int tablica[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (liczba == tablica[i]) {
            return true;
        }
    }
    return false; 
}

int main() {
    srand(time(NULL));
    const int rozmiar_tablicy = 10;
    int wylosowana_liczba[rozmiar_tablicy];
    int zgadniete_liczby = 0;
    int liczba;
    int licznik = 0;

   
    losuj_liczby(wylosowana_liczba, rozmiar_tablicy);

    cout << "Wynik działania programu:" << endl;
    for (int i = 0; i < rozmiar_tablicy; i++) {
        cout << wylosowana_liczba[i] << ", ";
    }
    cout << endl;

    while (true) {
        cout << "Podaj liczbę: ";
        cin >> liczba;
        licznik++;

        if (sprawdz_zgadniecie(liczba, wylosowana_liczba, rozmiar_tablicy)) {
            cout << "Zgadłeś!" << endl;
            cout << "Zgadłeś za " << licznik << " razem." << endl;
            break;
        }
        else {
            cout << "Nie zgadłeś" << endl;
        }
    }

    return 0;
}


