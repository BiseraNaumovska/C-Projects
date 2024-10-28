/*
5. Напиши програма која внесува радиус на круг
и испечатува негова плоштина и периметар. За
вредност на пи да се земе 3.14.
*/
#include <stdio.h>

int main()
{
    float r, Ploshtina, Perimetar;
    printf("Vnesi vrednost za radius\n");
    //scanf("%d", %r);
    r = 2.5;

    Ploshtina = 3.14*r*r;
    Perimetar = 2*3.14*r;

    printf("Ploshtina = %.2f \nPerimetar = %.2f\n", Ploshtina, Perimetar);

    return 0;
}
