/*Povekjenamenski sortirachki program
   koj koristi pokazhuvachi kon funkcii */

#include <stdio.h>

#define SIZE 10

/* prototipovi */
void bubble( int niza[], const int size, int (*sporedi)( int a, int b ) );
int rastechki( int a, int b );
int opagjachki( int a, int b );

int main()
{
    int redosled;   /* 1 za rastechki i 2 za opagjachi redosled */
    int brojach; /* brojach */

    /* inicijaliziraj niza a */
    int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    printf( "Vnesi 1 za sortiranje vo rastechki redosled,\n"
           "Vnesi 2 za sortiranje vo opagjachki redosled: " );
    scanf( "%d",  &redosled );

    printf( "\nPodatocite vo originalen redosled se:\n" );

    /* ispechati ja originalnata niza */
    for ( brojach = 0; brojach < SIZE; brojach++ ) {
        printf( "%5d", a[ brojach ] );
    } /* kraj for */

    /* sortiraj ja nizata vo rastechki redosled;
   predaj go rastechki kako argument za da specificirash
   deka sakash rastechki redosled */
    if ( redosled == 1 ) {
        bubble( a, SIZE, rastechki );
        printf( "\nPodatocite vo rastechki redosled se:\n" );
    } /* kraj if */
    else { /* predaj i na funkcijata opagjachki */
        bubble( a, SIZE, opagjachki );
        printf( "\nPodatocite vo opagjachki redosled se:\n" );
    } /* kraj else */

    /* ispechati ja sortiranata niza */
    for ( brojach = 0; brojach < SIZE; brojach++ ) {
        printf( "%5d", a[ brojach ] );
    } /* kraj for */

    printf( "\n" );
    return 0; /* uspeshen kraj */
} /* kraj main */

/* povekjenamenski bubble sort; parametarot sporedi e pokazhuvach kon
   sporeduvachkata funkcija koja go odreduva
   redosledot na sortiranje */
void bubble( int niza[], const int size,int (*sporedi)( int a, int b ) ){
    int pomin;  /* brojach na pominuvanja */
    int count; /* brojach na sporedbi */

    void swap( int *element1Ptr, int *element2ptr ); /* prototip */

    /* cikus shto gi kontrolira minuvanjata */
    for ( pomin = 1; pomin < size; pomin++ ) {

        /* ciklus shto gi kontrolira brojot na sporedbi
       vo edno pominuvanje */
        for ( count = 0; count < size - 1; count++ ) {

            /* ako sosednite elementi ne se podredeni, smeni gi */
            if ( (*sporedi)( niza[ count ], niza[ count + 1 ] ) ) {
                swap( &niza[ count ], &niza[ count + 1 ] );
            } /* kraj if */
        } /* kraj for */
    } /* kraj for */
} /* kraj na funkcijata bubble */

/* promeni gi vrednostite na memoriski lokacii na koi pokazhuvaat
   element1Ptr i element2Ptr */
void swap( int *element1Ptr, int *element2Ptr )
{
    int hold; /* promenliva za privremeno chuvanje na vrednosta */

    hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
} /* kraj na funkcijata swap */

/* odluchi dali elementite se nepodredeni za rastechki redosled */
int rastechki( int a, int b )
{
    return b < a;   /* smeni gi ako b e pomanlo od a */
} /* kraj na funkcijata rastechki */

/* odluchi dali elementite se nepodredeni za opagjachki redosled */
int opagjachki( int a, int b )
{
    return b > a;   /* promeni ako b e pogolemo od a */
} /* kraj na funkcijata opagjachki */

