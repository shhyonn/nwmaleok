#include <iostream>
using namespace std;

int main(){
	int a;
    int b;
    std::cout << "Podaj szyrokosc: ";
    std::cin >> a;
    std::cout << "Podaj : ";
    std::cin >>b;

   for(int i=0; i < b; i++){
       for(int j=0; j < a; j++){
           cout << "*";
           if (i<b;j<a)for(int i=0; i < b-1; i++){
       			for(int j=0; j < a-1; j++){
           cout << " ";;
           
       }
       }
 
       cout << endl;
   }
}
}