/*   Obid za promena na konstanten pokazhuvach kon
   nekonstantni podatoci */
#include <stdio.h>

int main()
{
    int x; /* definiraj x */
    int y; /* definiraj y */

    /* ptr e konstanten pokazhuvach kon cel broj koj mozhe da bide modificiran preku ptr, no ptr sekogash pokazhuva na ista memoriska lokacija */
    int * const ptr = &x;

    *ptr = 7; /* dozvoleno: *ptr ne e const */
    ptr = &y; /* greshka: ptr e const;
ne mozhesh da mu dodelish nova adresa */

    return 0; /* uspeshen kraj */
} /* kraj na main */
