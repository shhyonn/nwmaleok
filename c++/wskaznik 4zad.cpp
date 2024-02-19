#include <iostream>

using namespace std;

int SumTab(int* a, int b){
	int sum=0;
	for (int i=0; i<b; ++i){
		sum += a[i];
	}
	return sum;
}
int main(){

	int tablica[5];
	
	
	cout<<"Podaj 5 liczb do sumowania: "<<endl;
	for(int i=0; i< 5; ++i){
		cin>>tablica[i];
		
	}
	int odpowiedz =SumTab(tablica, 5);
	cout<<"suma liczb:"<<odpowiedz<<endl;

return 0;
}