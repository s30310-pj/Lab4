#include <iostream>
using namespace std;

int i, j, elementy, tablica[100];

void najczesciej_wystepujacy_element(int tablica[], int elementy)
{
    int max = 0;
    cout << "Najczesciej wystepujacy element: ";
    for (i = 0; i < elementy; i++)
    {
        int licz = 1;
        for (j = i + 1; j < elementy; j++)
            if (tablica[i] == tablica[j])
                licz++;
        if (licz > max)
            max = licz;
    }
    for (i = 0; i < elementy; i++)
    {
        int licz = 1; 
        for (j = i + 1; j < elementy; j++)
            if (tablica[i] == tablica[j])
                licz++;
        if (licz == max)
            cout << tablica[i] << endl;
    }
}

int main() {
    cout<<"Podaj liczbę elementów tablicy (od 1 do 100): ";
    cin>>elementy;
    for(i = 0; i < elementy; i++)
    {
        cout<<"Wpisz liczbe nr "<<i+1<<" : ";
        cin>>tablica[i];
    }
    najczesciej_wystepujacy_element(tablica, elementy);
    return 0;
}