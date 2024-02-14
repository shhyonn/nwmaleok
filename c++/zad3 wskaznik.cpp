#include <iostream>

using namespace std;
void zmienne(float a, float b , float c) {
 float *wsk1=&a;
 float *wsk2=&b;
 float *wsk3=&c;
 *wsk1+=1;
 *wsk2+=2;
 *wsk3+=3;
  
}

int main() {
      float a = 1.0;
    float b = 1.0;
    float c = 1.0;
   
    cout << "wartosci zmiennych" << std::endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    zmienne(&a, &b, &c);


    cout << "wartosci zmiennych po modyfikacji" << std::endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    return 0;
}
