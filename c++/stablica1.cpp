#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	
    char tablica[100];
    cout<<"Podaj imie i nazwisko: "; 
    cin.getline(tablica,100); 
    int pos1=-1;
    for(int i=0; i<strlen(tablica); ++i){
    	if(tablica[i]==' '){
    		pos1=i;
    		break;
		}
	}
	 if(pos1 !=-1){
	 	cout<<cout<<"Twoje dane osobowe: "<<tablica<<endl;
    	cout<<"Pozycja spacji:"<<pos1<<endl;
   		 cout<<"Pozycja konca tekstu:"<<strlen(tablica)<<endl;
	 }
    return 0;
}
