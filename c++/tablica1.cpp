#include <iostream>
using namespace std;
int main() {
    cout << "Wprowadz 5 liczb:" <<endl;
    int liczba[ 4 ];
cin >> liczba[ 0 ];
cin >> liczba[ 1 ];
cin >> liczba[ 2 ];
cin >> liczba[ 3 ];
cin >> liczba[ 4 ];
    cout << "Liczby parzyste: ";
 if (liczba[0] % 2 == 0) {
        cout << liczba[0] << ", ";
    }
    if (liczba[1] % 2 == 0) {
        cout << liczba[1] << ", ";
    }
    if (liczba[2] % 2 == 0) {
        cout << liczba[2]<< ", ";
    }
    if (liczba[3] % 2 == 0) {
        cout << liczba[3] << ", ";
    }
    if (liczba[4] % 2 == 0) {
        cout << liczba[4] << ", ";
    }
    
 
    return 0;
}
