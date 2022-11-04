//
// Created by maxim on 29.10.2022.
//
#include <stdio.h>
#include <math.h>

void triangle(){
    float a = 0.00;
    float b = 0.00;
    float c = 0.00;
    float h, sum;

    printf("********************************************************************************\n");
    printf("Gegeben ist ein Dreieck mit den Gezeichneten Seiten a,b und c\n");
    printf("********************************************************************************\n");
    printf("                       *\n");
    printf("                      ***\n");
    printf("            (b)    *********        (a)\n");
    printf("                ***************\n");
    printf("             *********************\n");
    printf("          ***************************\n");
    printf("                        (c)\n");
    printf("********************************************************************************\n");
    printf("Bitte geben Sie die Laenge der einzelnen Seiten zur Flaechenberechnung ein!\n");
    printf("********************************************************************************\n");
    printf("Laenge Seite a:\n");
    scanf(" %f",&a);
    printf("Laenge Seite b:\n");
    scanf(" %f",&b);
    printf("Laenge Seite c:\n");
    scanf(" %f",&c);

    h = (a+b+c) / 2.00;
    printf("Höhenergebnis ist: %f\n", h);

   sum = sqrt(h * (h - a) * (h - b) * (h - b));
   printf("Das Endergebnis ist %f", sum);
}

int main(){
    triangle();
    return 0;
}