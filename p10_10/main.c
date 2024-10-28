/*Sizeof operatorot koga se koristi so ime na niza
   vrakja broj na bajti vo nizata. */
#include <stdio.h>

size_t getSize( float *ptr ); /* prototip */

int main()
{
    float array[ 20 ]; /* kreiraj niza */

    printf( "Brojot na bajti vo nizata e %d"
           "\nBrojot na bajti vrateni preku getSize e %d\n",
           sizeof( array ), getSize( array ) );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* vrati golemina na ptr */
size_t getSize( float *ptr )
{
    return sizeof( ptr );

} /* kraj na funkcijata getSize */
