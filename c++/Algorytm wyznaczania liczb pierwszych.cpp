#include <iostream>
using namespace std;
int main() {
    int n, lp = 0, p = 2, d;
    cout << "Ile liczb pierwszych chcesz wyswietlic: ";
    cin >> n;    
    cout << "Liczby pierwsze: ";

    while (lp < n) {
        for (d = 2; d < p; d++) {
            if (p % d == 0) {
                break;
            }
        }
        if (d == p) {
            cout << p << ", ";
            lp++;
        }
        p++;
    }

    return 0;
}