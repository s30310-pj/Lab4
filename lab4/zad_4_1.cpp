#include <iostream>
using namespace std;

int i, elementy, tablica[100];

int main() {
    cout<<"Podaj liczbę elementów tablicy (od 1 do 100): ";
    cin>>elementy;
    for(i = 0; i < elementy; i++)
    {
        cout<<"Wpisz liczbe nr "<<i+1<<" : ";
        cin>>tablica[i];
    }
    for(i = 0; i < elementy; i++) 
    {
        if(tablica[0] < tablica[i])
        tablica[0] = tablica[i];
    }
    cout<<"Najwiekszy element = "<< tablica[0];
    return 0;
}