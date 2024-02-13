#include <iostream>

using namespace std;
int main(){
int telefon = 12345;         //zmienna liczbowa
int *wsk = &telefon;         //przypisanie wskaźnikowi adresu zmiennej telefon

cout << *wsk << endl;        //wyświetlenie wyłuskanej wartości wskaźnika (12345)
cout << wsk << endl;         //wyświetlenie adresu zmiennej telefon
cout << &wsk << endl;        //wyświetlenie adresu wskaźnika
cout << &telefon << endl;    //wyświetlenie adresu zmiennej telefon
}