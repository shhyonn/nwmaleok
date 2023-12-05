#include <iostream>
using namespace std;
int main() {
    cout << "Wprowadz 5 liczb ujemnych lub dodatnich:" <<endl;
    int liczba[ 4 ];
cin >> liczba[ 0 ];
cin >> liczba[ 1 ];
cin >> liczba[ 2 ];
cin >> liczba[ 3 ];
cin >> liczba[ 4 ];
    cout << "Liczby ujemne zamienione na 0: ";
 if (liczba[0] <= 0 ) {
 
        cout << "0" << ", ";}
		else cout<< liczba[0]<<", ";
if (liczba[1] <= 0 ) {

        cout << "0" << ", ";}
		else cout<< liczba[1]<<", ";
if (liczba[2] <= 0 ) {

        cout << "0" << ", ";}
		else cout<< liczba[2]<<", ";
 if (liczba[3] <= 0 ) {
 
        cout << "0" << ", ";}
		else cout<< liczba[3]<<", ";
    if (liczba[4] <= 0 ) {
	
        cout << "0" << ", ";}
		else cout<< liczba[4]<<", ";
 
    return 0;
}
