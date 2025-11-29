#include <stdio.h>


/*typedef struct Ksiazka {
    int liczba_stron;
    int rok_wydania;
}Ksiazka;*/

int main(){

    int rozmiar_tablicy = 5;
    int tablica[5] = {2, 3, 200, 8, 7}; //tablica o rozmiarze 5 + wartości
    int temp;

    temp = tablica[rozmiar_tablicy - 1];
    tablica[rozmiar_tablicy - 1] = tablica[0]; // zapamiętane w temp, nadpisujemy
    tablica[0] = temp;

    for(int i = 0; i < rozmiar_tablicy; i++){

        printf("Tablica [%d] = %d\n", i, tablica[i]);
       
    }







    return 0;
}