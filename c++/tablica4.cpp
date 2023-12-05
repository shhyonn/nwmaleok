#include <iostream>
 using namespace std;
int main() {
    const int w = 3; //t-tablica; w-wiersze; k-kolumny, vv-wartosc
    const int k = 5;
 
    int t[w][k];
    int vv = 1;
 
    
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < k; ++j) {
            t[i][j] = vv++;
        }
    }
 
    
    for (int i = 0; i < w; ++i) {
        for (int j = 0; j < k; ++j) {
           cout << t[i][j] << " ";
        }
    }
 
    return 0;
}
