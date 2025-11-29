#include <stdio.h>

int main(){

    int rozmiar_tablicy = 5;
    int tablica[5] = {2, 3, 200, 8, 7};
    int ica[0];
    int max = -7890;
    int min = 3000;

    for(int i = 0; i < rozmiar_tablicy; i++){

        if (tablica[i] > max){

            max = tablica[i];
        }

        if (tablica[i] < min){

            min = tablica[i];
        }
    }

    printf("Maksymalna wartość w tablicy: %d\n", max);
    printf("Minimalna wartość w tablicy: %d\n", min);



    return 0;
}