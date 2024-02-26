#include <iostream>

using namespace std;

void pobieraliczby(int tablica[], int rozmiar)
 {
    cout << "Podaj 10 liczb:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cin >> tablica[i];
    }
}
int sprawdza(int tablica[], int rozmiar, int szukana) {
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] == szukana) {
            return i; 
        }
    }
    return 0; 
}

int main() {
    const int rozmiar = 10;
    int mojaTablica[rozmiar];
	pobieraliczby(mojaTablica, rozmiar);
    int zgadywana;
    
    cout << "Zgaduj liczby :" << endl;
    while (true){
    	cin>>szukana;
    	if(szukana== )//nie rozumiem, jak zaznaczyć
		{
    	break;
        }
      
        if ( )//nwm 
		{
            cout << "Trafiono " << zgadywanaLiczba<< endl;
            break;
        } else {
            cout << "Nie trafiono" << endl;
        }
    }
	

    return 0;
}


