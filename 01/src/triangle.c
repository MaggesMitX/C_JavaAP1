//
// Created by maxim on 29.10.2022.
//
#include <stdio.h>
#include <math.h>
#include<unistd.h>
void triangle(){
    float a,b,c = 0;
    float h, sum = 0;

    printf("**********************************************\n");
    printf("Gegeben ist ein Dreieck mit den Gezeichneten Seiten a,b und c\n");
    printf("**********************************************\n");
    printf("                       *\n");
    printf("                      ***\n");
    printf("            (b)    *********        (a)\n");
    printf("                ***************\n");
    printf("             *********************\n");
    printf("          ***************************\n");
    printf("                        (c)\n");
    printf("Bitte geben Sie die Laenge der einzelnen Seiten zur Flaechenberechnung ein!\n");
    printf("Laenge Seite a:\n");
    scanf(" %.2f\n",&a);
    printf("Eingegebene Seite a: %.2f\n", a);
    sleep(2);
    printf("Laenge Seite b:\n");
    scanf(" %.2f\n",&b);
    printf("Eingegebene Seite b: %.2f\n", b);

    printf("Laenge Seite c:\n");
    scanf(" %.2f\n",&c);
    printf("Eingegebene Seite c: %.2f\n", c);

    h = (a+b+c) / 2;
    printf("%.2f", h);

   // sum = sqrt(h * (h - a) * (h - b) * (h - b));
    //printf("Das Ergebnis ist %.2f", sum);//
}

int main(){
    triangle();
    return 0;
}