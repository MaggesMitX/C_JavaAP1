//
// Created by maxim on 30.10.2022.
//
/*Schreiben Sie ein Programm, das eine Ganzzahl von der Tastatur einliest. Anschließend soll
folgende Berechnung angestellt werden:
- Wenn x durch 2 teilbar ist, soll x/2 als Ergebnis ausgegeben werden
- Ansonsten soll die Zahl 4711 auf der Konsole ausgegeben werden
Geben Sie das Ergebnis auf der Konsole aus*/

#include <stdio.h>
#include <stdbool.h>

bool is_even(int sum){
    if (sum % 2 == 0)
        return true;
    else{
        printf("4711", sum);
        return false;
    };
}

int main(){
    int num, sum = 0;

    printf("Bitte geben Sie eine Zahl ein die Sie durch 2 teilen wollen:\n");
    scanf(" %i",&num);
    sum = num / 2;

    if(is_even(sum))
        printf("%d", sum);
    return 0;
}