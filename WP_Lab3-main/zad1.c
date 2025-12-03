#include <stdio.h>
#define MAX 50 // definiuje wartości stałe (zmienna - pewność, że ta wartość bd stała; maks wartość maksymalna)

int main() { // void - że nie ma argumentów
    FILE *fp; // typ - do wskaznikow pliku * - wskaznik
    FILE *fegzamin;
    FILE *fwyniki = fopen ("wyniki.txt", "w");
    char nazwisko[50]; // tablica typu char - limit nazwiska, nie wiecej niz 50 znakow 
    // char nazwisko[50] = { 'G', 'r', 'a' ... itd}
    int indeks; // zmienna inde
    //int MAX = 50; - JEST ryzyko, że to się zmieni
    int indeksy[MAX];
    
    

    // -----------------------------
    // Krok 1: Wczytanie i wyświetlenie studentów z nieparzystym indeksem
    // -----------------------------
    fp = fopen("studenci.txt", "r"); // do otwarcia pliku // string - ciag znakow // r -odczytuje plik, w- 
    //jak nie ma zwroci null - w r; w w moge zmieniac // 2 argumenty
    //NULL = 0 = false
    if (!fp) { // (fp == NULL || ... itd)
        printf("Nie mozna otworzyc pliku studenci.txt\n");
        return 1; //return to konczymy program
    }

    printf("Studenci z nieparzystym indeksem:\n"); // while działa
    //fscanf do plikow
    // fscanf - wskaznik, format (nazwisko -ciag znakow -s - string specyfikator //nazwisko to tablica bez &
    // == 2 musza byc 2 miejsca, bo 2 wartosci
    // ana
    int i = 0;
    int suma = 0;
    // suma = suma + index;

    while (fscanf(fp, "%s %d", nazwisko, &indeks) == 2) {
        if (indeks%2 != 0){
            printf("%s %d\n", nazwisko, indeks);
        }
        suma += indeks; 
        indeksy[i] = indeks; // po kolei nasze linijki
        i++;
    }

    float srednia = suma / i; // lub przez MAX, bo jak się nam plik zmniejszy to nie poprawne bd
    printf(" srednia: %.2f\n", srednia);

    for (int j = 0; j < i; j++){
        if (indeksy[j] > srednia){
            printf("Indeks: %d\n", indeksy[j]);
        }
    }
    fclose(fp);

    int procenty;
    int ocena;
    fegzamin = fopen("egzamin.txt", "r");
    
    
    while (fscanf(fegzamin, "%d %d", &indeks, &procenty) == 2) {
        if (procenty > 90){

            ocena = 5; 
        } else if (procenty > 75){
            ocena = 4;
        } else if (procenty > 50){
            ocena = 3;
        } else {
            ocena = 2;
        }
        fprintf(fwyniki, " Indeks %d, Ocena: %d \n", indeks, ocena);



    }

    fclose(fegzamin);
    fclose(fwyniki);


    // -----------------------------
    // Kolejne zadania do wykonania:
    // -----------------------------
    // 1. Wczytaj wszystkie indeksy studentów do tablicy 'indeksy[MAX]'.
    // 2. Oblicz średnią wartości indeksów i wypisz indeksy większe od średniej.
    // 3. Wczytaj dane z pliku 'egzamin.txt'.
    // 4. Na podstawie punktów oblicz oceny (np. >90% = 5, >75% = 4, >50% = 3, reszta 2).
    // 5. Zapisz wyniki do pliku 'wyniki.txt' w formacie: numer indeksu i ocena.

    return 0;
}
