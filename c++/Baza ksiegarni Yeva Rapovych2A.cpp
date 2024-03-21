#include <iostream>
#include <string>
using namespace std;
//struktura księgarni
struct Ksiegarnia {
    string tytul;
    string autor;
    int rok;
    string wydawnictwo;
    double cena;
};


void wyswietlKsiazke(const Ksiegarnia& ksiazka) {
   cout << "Tytul: " << ksiazka.tytul
              << "\tAutor: " << ksiazka.autor
              << "\tRok: " << ksiazka.rok
              << "\tWydawnictwo: " << ksiazka.wydawnictwo
              << "\tCena: " << ksiazka.cena <<endl;
}

//za rokiem
void wyszukajPoRoku(const Ksiegarnia* ksiazki, int ilosc, int rok) {
    cout << "Znalezione ksiazki:" << endl;
    for (int i = 0; i < ilosc; ++i) {
        if (ksiazki[i].rok >= rok) {
            wyswietlKsiazke(ksiazki[i]);
        }
    }
}
//za cena
void wyszukajPoCenie(const Ksiegarnia* ksiazki, int ilosc, int cena) {
    cout << "Znalezione ksiazki:" << endl;
    for (int i = 0; i < ilosc; ++i) {
        if (ksiazki[i].cena >= cena) {
            wyswietlKsiazke(ksiazki[i]);
        }
    }
}
//za wydawnictwem powinno być
//void wyszukajWydawnictwo(const Ksiegarnia* ksiazki, int ilosc, int wydawnictwo) {
  //  cout << "Znalezione ksiazki:" << endl;
 //   for (int i = 0; i < ilosc; ++i) {
 //       if (ksiazki[i].wydawnictwo >= wydawnictwo) {
  //          wyswietlKsiazke(ksiazki[i]);
 //       }
 //   }
//}
int main() 
{
  
    Ksiegarnia ksiazki[ 7 ] = {
    { "Tytul1", "autor1", 1925, "Helion1", 23.54 },
    { "Tytul2", "autor2", 1926, "Helion2", 24.54 },
    { "Tytul3", "autor1", 1927, "Helion3", 25.54 },
    { "Tytul4", "autor2", 1928, "Helion1", 26.54 },
    { "Tytul5", "autor1", 1921, "Helion2", 27.54 },
    { "Tytul6", "autor2", 1930, "Helion3", 28.54 },
    { "Tytul7", "autor1", 1931, "Helion1", 29.54 },
};

    int iloscKsiazek = 7;

    cout << "Witaj w ksiegarnii" << endl;
    cout << "Po jakiej kategorii chcial bys wyszukac ksiazke:" <<endl;
    cout << "1. Rok wydania" << endl;
    cout << "2. Cena" << endl;
    cout << "3. Wydawnictwo" << endl;
    cout << "0. Wyjscie" << endl;

    int wybor;
    cin >> wybor;

    if (wybor == 1) {
        cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
        int rok;
        cin >> rok;
        wyszukajPoRoku(ksiazki, iloscKsiazek, rok);
    }
   
 if (wybor == 2) {
        cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
        int cena;
        cin >> cena;
        wyszukajPoCenie(ksiazki, iloscKsiazek, cena);
    }
//if (wybor ==3){ //nie działa 
//		cout<<"Podaj wydawnictwo jakie chcesz: ";
//		int wydawnictwo;
//		cin >>wydawnictwo;
//		wyszukajWydawnictwo(ksiazki, iloscKsiazek, wydawnictwo);
	
//}
    return 0;
}
