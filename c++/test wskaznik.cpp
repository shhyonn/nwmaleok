#include <iostream>

using namespace std;
int main(){

int x = 15;         //zmienna liczbowa
int *wsk = &x;         //przypisanie wskaźnikowi adresu zmiennej telefon

cout << *wsk << endl;        //wyświetlenie wyłuskanej wartości wskaźnika (12345)
}