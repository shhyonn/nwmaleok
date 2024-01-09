#include <iostream>
using namespace std;
float vat=1.23;
float Brutto(float netto) {
    return netto * vat;
}

float Netto(float brutto) {
    return brutto / vat;
}
int main()
{
	float netto, brutto;
    int wybor;
	
    cout << "Ktora kwote chcesz obliczyc? \n 1. Brutto \n 2. Netto" << endl;
    cin >> wybor;
	   switch(wybor) {
        case 1:
            cout << "Podaj kwote netto: ";
            cin >> netto;
            cout << "Brutto: " << Brutto(netto) << " zl" << endl;
            break;
        case 2:
            cout << "Podaj kwote brutto: ";
            cin >> brutto;
            cout << "Netto: " << Netto(brutto) << " zl" << endl;
            break;
    }
}