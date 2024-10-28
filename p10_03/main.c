/*Kub na promenliva koristejki povik po referenca
   (call-by-reference) so argument pokazhuvach
   with a pointer argument */

#include <stdio.h>


void cubeByReference( int *nPtr ); /* prototip */

int main()
{
    int number = 5; /* inicijaliziraj promenliva */

    printf( "Originalnata vrednost na promenlivata e %d", number );

    /* predaj ja adresata na promenlivata number na
   funkcijata cubeByReference */
    cubeByReference( &number );

    printf( "\nNovata vrednost na promenlivata e %d\n", number );
    return 0; /* uspeshen kraj */
} /* kraj na main */

/* presmetaj kub na *nPtr; direktno ja modificira promenlivata
   number vo main */
void cubeByReference( int *nPtr )
{
    *nPtr = *nPtr * *nPtr * *nPtr;  /* kub na *nPtr */
} /* kraj na funkcijata cubeByReference */
