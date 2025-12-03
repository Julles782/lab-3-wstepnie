#include <stdio.h>
#define MAX 10 
int main(void) { 
    FILE *fp; 
    int pracownicy [MAX][2];
    int wysokie_pensje[MAX];
    int liczba_powyzej_sredniej = 0;
    int pensja;

    FILE *fegzamin;
    
    int id [10];  
    int id; 
    int ids[MAX];
    
    
    
    fp = fopen("zarobki.txt", "r"); 
    if (!fp) { 
        printf("Nie mozna otworzyc pliku zarobki.txt\n");
        return 1; 
    }


    printf("zarobki :\n"); 
    int i = 0;
    int suma = 0;
    for (int i = 0; i < MAX; i++){
        fscanf(fp, "%d %d", &pracownicy[i][0] , &pracownicy[i][1])
    
        suma = suma + wyniki[i][1]; 
        
    }
    printf("Suma pensji: %d\n"; suma)

    double srednia = (double) suma / i; // lub przez MAX, bo jak się nam plik zmniejszy to nie poprawne bd
    printf(" srednia zarobkow: %.2f\n", srednia);


    FILE *fwysokie_pensje = fopen ("wysokie_pensje.txt", "w");
    if (!fwysokie_pensje) { 
        printf("Nie mozna otworzyc pliku wysokie_pensje.txt\n");
        return 1; 
    }

    for (int j = 0; j < i; j++){
        if (pracownicy[j] > srednia + 1000){

            wysokie_pensje[liczba_powyzej_sredniej] = pracownicy[j][0];
            fprintf(fwysokie_pensje, "Id %d, pensje: %d \n", id, pensja);;
        }
    }
    fclose(fp);

 

    fclose(fegzamin);
    fclose(fwysokie_pensje);


  

    return 0;
}
