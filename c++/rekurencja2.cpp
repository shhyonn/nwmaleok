#include <iostream>
using namespace std;

long long silnia(int n);

int main() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    cout << n << "! = " << silnia(n) << endl;
    return 0;
}
long long silnia(int n) {
    if (n == 0)
        return 1;
    else
        return n * silnia(n - 1);
}