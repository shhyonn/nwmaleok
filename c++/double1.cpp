#include <iostream>
using namespace std;


int suma(int a, int b){
	return a+b;
}
double suma(double a, double b){
    return a+b;
}



int main()
{
int calkow1, calkow2;
double zmien1, zmien2;
    cout << "Podaj dwie liczby ca³kowite: ";
    cin >> calkow1 >> calkow2;

    cout << "Podaj dwie liczby zmiennoprzecinkowe: ";
    cin >> zmien1 >> zmien2;
  
 int sumacal = suma(calkow1, calkow2);
    double sumazmien = suma(zmien1, zmien2);
    cout << "Suma liczb ca³kowitych: " << sumacal << endl;
    cout << "Suma liczb zmiennoprzecinkowych: " << sumazmien << endl;

    return 0;
}