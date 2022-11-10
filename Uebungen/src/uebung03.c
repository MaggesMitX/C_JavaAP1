//
// Created by maxim on 10.11.2022.
//

#include <stdio.h>

int main(){
    int i;
    int elemente[5];
    int kleinste = zahl[0];
    int stelle = 0;
    for (int y=0; i<5; i++){
        if (zahl[y] < kleinste){
            kleinste = zahl[y];
            stelle = y;
        }
    }

    for (i=0; i < 5; i++){
        printf("Bitte %i-tes Element eingeben:", i+1);
        scanf("%i", &elemente[i]);
    }
    printf("Die Array Elemente heißen:");
    for(i=0; i < 5; i++){
        printf(" %i ,",elemente[i]);
    }

    if(elemente[1] <= elemente[2])
        printf("Das kleinste Element heißt: %i", elemente[1]);
    else if(elemente[2] <= elemente[3])
        printf("Das kleinste Element heißt: %i", elemente[2]);
    else if (elemente[3] <= elemente[4])
        printf("Das kleinste Element heißt: %i", elemente[3]);
    else if (elemente[4] <= elemente[5])
        printf("Das kleinste Element heißt: %i", elemente[4]);
    else
        printf("Das kleinste Element heißt: %i\n", elemente[5]);
        printf("Kleinstes Element ist %i an Stelle %i\n", kleinste, zahl);
}