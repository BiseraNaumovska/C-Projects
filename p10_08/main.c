/*Obid za promena na konsanten pokazhuvach
   kon konstantni podatoci */
#include <stdio.h>

int main()
{
    int x = 5; /* inicijaliziraj x */
    int y;     /* definiraj y */

    /* ptr e konstanten pokazhuvach kon konstanten cel broj
   ptr sekogash pokazhuva na istata lokacija; celiot broj
   na taa lokacija ne mozhe da se menuva */
    const int *const ptr = &x;

    printf( "%d\n", *ptr );

    *ptr = 7; /* greshka: *ptr e const; ne mozhesh da mu dodelish nova vrednost */
    ptr = &y; /* greshka: ptr e const; ne mozhesh da mu dodelish nova adresa */

    return 0; /* uspeshen kraj */
} /* kraj na main */
