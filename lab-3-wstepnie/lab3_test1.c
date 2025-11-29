#include <stdio.h>

int main(){

    int rozmiar_tablicy = 100;
    int tablica[rozmiar_tablicy];
    for (int i=0; i < rozmiar_tablicy; i++){
        tablica [i] = i*i;
    }


    for (int i=0; i < rozmiar_tablicy; i++){
        printf("%d element tablicy: %d\n", i, tablica[i]);
    }

    return 0;

}
