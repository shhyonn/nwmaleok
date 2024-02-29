//Do tablicy 10 elementowej wylosuj 10 liczb z przedziału od 0 do 50. Funkcja losujaca
//Użytkownik podaje liczbę.
//Stworz funkcję sprawdzającą czy użytkownik zgadł liczbę.Przekaż do funkcji wskaźni na podaną przez użytkownia liczbę oraz tablicę z wylosowanymi wartościami.
//Użytkownik ma podawać tak długo liczbę aż trafi na którąś z wylosowanych liczb z tablicy(sprawdzić czy liczba jest w tablicy).
//Po trafieniu liczby wyświetlić ma się licznik za którym razem trafił.
//Wynik działania programu :
//
//25, 40, 9, 34, 19, 2, 37, 7, 12, 1,
//Podaj liczbe : 3
//Nie zgadles
//Podaj liczbe : 9
//Zgadles!
//Zgadles za 2 razem.



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


