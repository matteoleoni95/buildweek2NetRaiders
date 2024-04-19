#include <stdio.h>


int main() {
    int vector[10], i, j, k;
    int swap_var;
    int scelta;
//menù con scelta programma
    printf("Benvenuto, i NetRaiders sono qui per aiutarti, o forse no!\n");
    printf("Scegli il programma da eseguire:\n");
    printf("1. Programma corretto\n");
    printf("2. Programma con errore di segmentazione\n");
    printf("Scelta: ");
    scanf("%d", &scelta);

    if (scelta == 1) {
        printf("Esecuzione del programma corretto...\n");

        printf("Inserire 10 interi:\n");
        for (i = 0; i < 10; i++) { //// inserimento esclusivo numero, in caso di inserimento lettera o simbolo, da messaggio errore e non va avanti con l'array
            printf("[%d]:", i + 1);
            while (scanf("%d", &vector[i]) != 1) {
                printf("Input non valido. Devi inserire un numero intero.\n");
                while (getchar() != '\n'){
                printf("[%d]:", i + 1);
                }
            }
        }
        //stampa output vettore inserito
        printf("Il vettore inserito e':\n");
        for (i = 0; i < 10; i++) {
            int t = i + 1;
            printf("[%d]: %d\n", t, vector[i]);
        }

        // Ordinamento del vettore
        for (j = 0; j < 10 - 1; j++) {
            for (k = 0; k < 10 - j - 1; k++) {
                if (vector[k] > vector[k+1]) {
                    swap_var = vector[k];
                    vector[k] = vector[k+1];
                    vector[k+1] = swap_var;
                }
            }
        }

        printf("Il vettore ordinato e':\n");
        for (j = 0; j < 10; j++) {
            int g = j + 1;
            printf("[%d]: %d\n", g, vector[j]);
        }
    } 
    else if (scelta == 2) {
        printf("Esecuzione del programma con errore di segmentazione...\n");

        printf("Inserire 23 numeri interi:\n");
        for (i = 0; i < 23; i++) { // Provocare un errore di segmentazione inserendo più interi del consentito
            printf("[%d]:", i + 1);

            // inserimento esclusivo numero 
            while (scanf("%d", &vector[i]) != 1) {
                printf("Input non valido. Devi inserire un numero intero.\n");
                while (getchar() != '\n'){ 
                printf("[%d]:", i + 1);
                }
            }

        }

        printf("Il vettore inserito e':\n");
        for (i = 0; i < 10; i++) {
            int t = i + 1;
            printf("[%d]: %d\n", t, vector[i]);
        }
        // Ordinamento del vettore
        for (j = 0; j < 10 - 1; j++) {
            for (k = 0; k < 10 - j - 1; k++) {
                if (vector[k] > vector[k+1]) {
                    swap_var = vector[k];
                    vector[k] = vector[k+1];
                    vector[k+1] = swap_var;
                }
            }
        }
        printf("Il vettore ordinato e':\n");
        for (j = 0; j < 10; j++) {
            int g = j + 1;
            printf("[%d]: %d\n", g, vector[j]);
        }
    }
    else {
        printf("Scelta non valida.\n");
        return 1; // Uscita con codice di errore
    }

    return 0;
}