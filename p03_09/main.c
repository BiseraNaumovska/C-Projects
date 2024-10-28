/*
4. Во примерот p03_01.c, во наредбата printf наместо
спецификаторот за конверзија  %f, поставете го спецификаторот
%d. Што се случува и зошто?
*/

#include <stdio.h>
float result;

int main()
{
    result = 7.0/22.0;
    printf("Rezultatot e %d\n", result);

    result = 7.0/22.0;
    printf("Rezultatot e %d\n", result);

    result = 7.0/22;
    printf("Rezultatot e %d\n", result);

    result = 7/22;
    printf("Rezultatot e %d\n", result);

    result = 7/22.;
    printf("Rezultatot e %d\n", result);

    result = 7./22;
    printf("Rezultatot e %d\n", result);

    return 0;
}
