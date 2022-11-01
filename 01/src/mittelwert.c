//
// Created by maxim on 01.11.2022.
//
#include <stdio.h>

void calculation() {
    /* Eingabe der 10 benötigten Variablen*/
    int i, n;
    float input, mid, sum;
    printf("Wie viele Zahlen sollen eingeben werden?\n");
    scanf(" %i",&n);

    for (i = 1; 1 < n; i++){
        printf("Geben Sie die Zahl ein\n");
        scanf(" %f",&input);
        sum += input;
    }
    mid = sum / n;
    printf("Der Mittelwert beträgt: %f", mid);
}

    int main(){
        calculation();
        printf("Done...\n");
        return 0;
    }