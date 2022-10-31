//
// Created by maxim on 29.10.2022.
//
#include <stdio.h>


int main(){
    /*Initialisieren*/
    float zahl1;
    float zahl2;
    float ergebnis;
    char operator;
    /*Ein/Ausgabe Konzept*/
    printf("Geben Sie die erste Zahl ein:\n");
    scanf(" %f",&zahl1);
    printf("Geben Sie den Operator ein(+ , -, *, /):\n");
    scanf(" %c",&operator);
    printf("Geben Sie die zweite Zahl ein:\n");
    scanf("%f",&zahl2);

    /*switch case*/
    switch (operator) {
        case '+':
            ergebnis = zahl1 + zahl2;
            printf("Done..\n");
            /*printf("%f + %f = %f",zahl1,zahl2,ergebnis);*/
            break;
        case '-':
            ergebnis = zahl1 - zahl2;
            printf("Done..\n");
            /*printf("%f - %f = %f",zahl1,zahl2,ergebnis);*/
            break;
        case '*':
            ergebnis = zahl1 * zahl2;
            printf("Done..\n");
            /*printf("%f * %f = %f",zahl1,zahl2,ergebnis);*/
            break;
        case '/':
            ergebnis = zahl1 / zahl2;
            printf("Done..\n");
            /*printf("%f / %f = %f",zahl1,zahl2,ergebnis);*/
            break;
        default:
            printf("Bitte geben Sie einen richtigen Operator an! (+, -, *, /)\n");
            return -1;
    }
    printf("Ihr ergebnis ist: %f\n", ergebnis);
    return 0;
}