/* Program p07_02.c
   Naogjanje na maksimum od tri celi broevi */

#include <stdio.h>

int maximum( int x, int y, int z ); /* funkciski prototip */

int main()
{
    int number1; /* prv cel broj */
    int number2; /* vtor cel broj */
    int number3; /* tret cel broj */

    printf( "Vnesi tri celi broja: " );
    scanf( "%d%d%d", &number1, &number2, &number3 );

    printf( "Maksimumot e: %d\n", maximum( number1, number2, number3 ) );

    return 0;
}

/* Definicija na funkcijata maximum */
/* x, y i z se parametrite */
int maximum( int x, int y, int z )
{
    int max = x;     /* pretpostavi deka x e najgolemt */

    if ( y > max ) { /* ako y e pogolem od max, dodeli go y na max */
        max = y;
    } /* kraj if */

    if ( z > max ) { /* ako z e pogolem od max, dodeli go z na max */
        max = z;
    } /* kraj if */

    return max;      /* max e najgolemata vrednost */

} /* kraj na funkcijata maximum */
