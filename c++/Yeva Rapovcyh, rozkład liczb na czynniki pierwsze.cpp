#include <iostream>
using namespace std;
void rozklad(int n) {
    for (int k = 2; n > 1; ++k) {
        while (n % k == 0) {
            cout << k << " ";
            n /= k;
        }
    }
    cout << endl;
}
 
int main() {
    int n;
    cout << "Podaj liczbe : ";
    cin >> n;
    cout << "Czynniki pierwsze liczby "<< n <<": ";
    rozklad(n);
    return 0;
}