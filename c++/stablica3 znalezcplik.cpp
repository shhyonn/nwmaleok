#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[100];
    cout << "Podaj tekst: ";
    cin.getline(text, 100);

    int endp = strlen(text) - 1;
    while (text[endp] == ' ') {
        endp--;
    }

    int dotp = -1;
    for (int i = 0; i <= endp; i++) {
        if (text[i] == '.') {
            dotp = i;
        }
        if (text[i] != ' ' && dotp != -1) {
            break;
        }
    }

    int nazwapliku = -1;
    for (int i = dotp - 1; i >= 0; i--) {
        if (text[i] == ' ') {
            nazwapliku = i + 1;
            break;
        }
    }

    cout << "Pozycja końca tekstu: " << endp << endl;
    cout << "Pozycja kropki: " << dotp << endl;
    cout << "Pozycja początku nazwy pliku: " << nazwapliku << endl;
    cout << "Nazwa pliku: ";
    for (int i = nazwapliku; i < dotp; i++) {
        cout << text[i];
    }
    cout << endl;
    cout << "Rozszerzenie: ";
    for (int i = dotp + 1; i <= endp; i++) {
        cout << text[i];
    }
    cout << endl;
    return 0;
}
