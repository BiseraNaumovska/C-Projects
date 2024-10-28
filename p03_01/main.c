
/* Program 3.1: p03_01.c
    Manipulacija so decimalni broevi */

#include <stdio.h>

float result;

int main()
{
    result = 7.0/22.0;
    printf("Rezultatot e %f\n", result);

    result = 7.0/22.0;
    printf("Rezultatot e %f\n", result);

    result = 7.0/22;
    printf("Rezultatot e %f\n", result);

    result = 7/22;
    printf("Rezultatot e %f\n", result);

    // ova nema da dade rezultat = 0.000000
    result = 7/22.;
    printf("Rezultatot e %f\n", result);

    result = 7./22;
    printf("Rezultatot e %f\n", result);


    return 0;
}
