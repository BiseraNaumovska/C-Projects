/* Program p08_15.c
   Linearno prebaruvanje na niza
Линеарното пребарување ги споредува сите елементи на низата со клуч
што го бараме во низата. Ако низата не е никако подредена, тогаш
постои иста веројатност дека вредноста на клучот ќе биде пронајдена
на првиот, на последниот или на било кој елемент од низата.*/

#include <stdio.h>
#define SIZE 100

/* funkciski prototipe */
int linearSearch( const int array[], int key, int size );

/* pochetok na izvrshuvanjeto */
int main()
{
    int a[ SIZE ]; /* kreiraj niza a */
    int x; /* brojach za inicijaliziranje na elementite 0-99 na a */
    int searchKey; /* vrednost koja treba da ja najdeme vo a */
    int element; /* promenliva koja ja drzhi lokaciata na searchKey ili -1 */

    /* napolni niza */
    for ( x = 0; x < SIZE; x++ ) {
        a[ x ] = 2 * x;
    } /* kraj for */

   // printf( "vnesi vrednost koja treba da se najde:\n" );
   // scanf( "%d", &searchKey );

    /* probaj da go najdesh searchKey vo a */
    //element = linearSearch( a, searchKey, SIZE );
    element = linearSearch( a, 6, SIZE );

    /* ispechati rezultati */
    if ( element != -1 ) {
        printf( "Ja najdov baranata vrednost vo elementot %d\n", element );
    } /* kraj if */
    else {
        printf( "vrednosta ne e najdena vo nizata\n" );
    } /* kraj else */

    return 0; /* uspeshen kraj */

} /* kraj main */

/* sporedi ja vrednosta na kluchot (key) so sekoj element vo nizata
   dodeka ne ja najdesh negovata lokacija ili dodeka ne dodjesh do
   krajot na nizata; vrati go indeksot na elementot ako kluchot e najden
   ili -1 ako kluchot ne e najden */
int linearSearch( const int array[], int key, int size )
{
    int n; /* brojach */

    /* pomini niz nizata */
    for ( n = 0; n < size; ++n ) {
        if ( array[ n ] == key ) {
            return n; /* vrati ja lokacijata na kluchot */
        } /* kraj if */
    } /* kraj for */

    return -1; /* kluchot ne e najden */
} /* kraj na funkciata linearSearch */

