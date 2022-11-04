//
// Created by MRamacher on 04.11.2022.
//
#include <stdio.h>
#include <math.h>

int main(){
     int x, y, sum = 0;
    printf("Bitte geben Sie einen Wert ein:");
    scanf("%i", &x);
    printf("Bitte geben Sie noch einen Wert ein:");
    scanf("%i", &y);
    sum = x + y;
    printf("Ihr Ergebnis ist: %i", sum);
}
