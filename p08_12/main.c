/* Program p08_12.c
   Demostracija na const kvalifikator so nizi */
#include <stdio.h>

void tryToModifyArray( const int b[] ); /* funkciski prototip */

/* pochetok na izvrshuvanjeto */
int main()
{
    int a[] = { 10, 20, 30 }; /* inicijaliziraj ja a */

    tryToModifyArray( a );

    printf("%d %d %d\n", a[ 0 ], a[ 1 ], a[ 2 ] );

    return 0; /* uspeshen kraj */

} /* kraj na main */

/* Vo funkcijata tryToModifyArray, nizata b e const, pa ne mozhe da se
   koristi za modificiranje na originalnata niza a od main. */
void tryToModifyArray( const int b[] )
{
    b[ 0 ] /= 2;    /* greshka */
    b[ 1 ] /= 2;    /* greshka */
    b[ 2 ] /= 2;    /* greshka */
} /* kraj na funkcijata tryToModifyArray */

