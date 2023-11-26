#include <iostream>
using namespace std;

int main(){
	int a;
    int b;
    std::cout << "Podaj szyrokosc: ";
    std::cin >> a;
    std::cout << "Podaj wysokosc : ";
    std::cin >>b;

   for(int i=0; i < b; i++){
       for(int j=0; j < a; j++){
       	if (i==0 || i == b-1)
           cout << "--";
        else if ((i + j) % 2 == 0) {
                std::cout << "*";
            } 
		else {
                std::cout << "#";
            }
            std::cout << "--";
           
       }
       cout << endl; 
	   cout << "#*";
	   cout << endl; 
       }
 
       
   }
