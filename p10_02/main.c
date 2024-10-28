/*Kub na promenliva koristejki povik po vrednost
   (call-by-value) */

#include <stdio.h>

int cubeByValue( int n ); /* prototip */

int main()
{
    int number = 5; /* inicijaliziraj ja promenlivata number */

    printf( "Originalnata vrednost na promenlivata e %d", number );

    /* predaj ja promenlivata po vrednost na funkcijata cubeByValue */
    number = cubeByValue( number );

    printf( "\nNovata vrednost na promenlivata e %d\n", number );
    return 0; /* uspeshen kraj */
} /* kraj main */

/* presmetaj i vrati kub na clobroen argument */
int cubeByValue( int n )
{
    return n * n * n;   /* kub na lokalnata n i vrati rezultat */
} /* kraj na funkcijata cubeByValue */
