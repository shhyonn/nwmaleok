#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	
    char tablica[200];
    cout<<"Podaj tekst o maksymalnej dlugosci 200 znakow: "; 
    cin.getline(tablica,200); 
    int pos1=-1;
    string str = tablica;
    for(int i=0; i< str.size(); i++){
    	if(tablica[i]=' ' || str [i] == '-'){
    		pos1=i;
    		break;
		}
	}
	if(pos1 !=-1){
		cout<<"Zmodyfikowany wyraz:"<<tablica<<endl;
}
    return 0;
}