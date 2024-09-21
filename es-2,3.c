#include <stdio.h>

int main()
{
    int ora1, ora2;
    int minuti1, minuti2;
    int secondi1, secondi2;
    int differenza;

    printf("Calcola la differenza tra 2 orari in secondi:\n");

    printf("Inserisci i dati del primo orario:\n");
    printf("Ora:");
    scanf("%d", &ora1);
    printf("Minuti:");
    scanf("%d", &minuti1);
    printf("Secondi:");
    scanf("%d", &secondi1);

    printf("Inserisci i dati del secondo orario:\n");
    printf("Ora:");
    scanf("%d", &ora2);
    printf("Minuti:");
    scanf("%d", &minuti2);
    printf("Secondi:");
    scanf("%d", &secondi2);

    /* Ora = 3600sec, Minuto = 60sec*/
    secondi1 = ((ora1 * 3600)+minuti1 * 60)+secondi1;
    secondi2 = ((ora2 * 3600)+minuti2 * 60)+secondi2;
    differenza = secondi1 - secondi2;
    // printf("%d", secondi1); DEBUG: Scommenta solo se devi verificare il numero di secondi del 1°orario
    // printf("%d", secondi2); DEBUG: Scommenta solo se devi verificare il numero di secondi del 2°orario

    if (differenza < 0)
    {
        differenza = differenza * -1;
    }

    printf("La differenza tra i due orari in secondi è %d", differenza);
}