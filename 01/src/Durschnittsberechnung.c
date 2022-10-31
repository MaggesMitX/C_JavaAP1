//
// Created by MRamacher on 31.10.2022.
//
#include <stdio.h>

void calculation(){
    /* Eingabe der 10 benötigten Variablen*/
    int a,b,c,d,e,f,g,h,i,j = 0;
    float sum = 0;

    printf("Bitte geben Sie die erste Zahl ein:\n");
    scanf(" %i",&a);

    printf("Bitte geben Sie die zweite Zahl ein:\n");
    scanf(" %i",&b);

    printf("Bitte geben Sie die dritte Zahl ein:\n");
    scanf(" %i",&c);

    printf("Bitte geben Sie die vierte Zahl ein:\n");
    scanf(" %i",&d);

    printf("Bitte geben Sie die fuenfte Zahl ein:\n");
    scanf(" %i",&e);

    printf("Bitte geben Sie die sechste Zahl ein:\n");
    scanf(" %i",&f);

    printf("Bitte geben Sie die siebte Zahl ein:\n");
    scanf(" %i",&g);

    printf("Bitte geben Sie die achte Zahl ein:\n");
    scanf(" %i",&h);

    printf("Bitte geben Sie die neunte Zahl ein:\n");
    scanf(" %i",&i);

    printf("Bitte geben Sie die zehnte Zahl ein:\n");
    scanf(" %i",&j);

    sum = (a+b+c+d+e+f+g+h+i+j) / 10;
    printf("Das Ergbnis ist %.2f", sum);
}
int main(){
    calculation();
    printf("Done...\n");
}