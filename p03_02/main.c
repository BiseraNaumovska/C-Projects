/* Program. 3.2: p03_02.c
   Manipuliranje so operatori */


#include <stdio.h>

int main()
{

    int integer1, integer2, suma;
    float kol;

    printf("Vnesi prv cel broj \n");
    scanf("%d", &integer1);

    printf("Vnesi vtor cel broj \n");
    scanf("%d", &integer2);

    suma = integer1 + integer2;

    kol = (float)integer1/integer2; /* каст оператор (оператор кој овозможува преминување од еден во друг тип */

    printf("Suma = %d\n", suma);
    printf("Kolichnik = %.2f\n", kol);


    return 0;
}
