/*
На 40 студенти им е дадена анкета за да ја оценат храната во
нивната локална кафетерија со вредности од 1 (најлошо) до 10
(најдобро). Смести ги 40-те одговори во низа и сумирај ги
резултатите од анкетата.

Program p08_05.c
   Studentska anketa

*/
#include <stdio.h>

#define RESPONSE_SIZE 40 /* definiraj gi goleminite na nizite */
#define FREQUENCY_SIZE 11


int main()
{
    int answer; /* brojach koj pominuva niz 40 studentski odgovori */
    int rating; /* brojach koj pominuva niz frekvenciite 1-10 */

    /* inicijaliziraj gi brojachite na frekvencii na 0 */
    int frequency[ FREQUENCY_SIZE ] = { 0 };

    /* smesti gi odgovorite od anketata vo nizata responses */
    int responses[ RESPONSE_SIZE ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                    1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                                    5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    /* za sekoj odgovor, selektiraj ja vrednosta na elementot od nizata responses
      i iskoristi ja taa vrednost kako subskript vo nizata frequency za da se odluchi koj element da se zgolemi */
    for ( answer = 0; answer < RESPONSE_SIZE; answer++ ) {
        ++frequency[ responses [ answer ] ];
    } /* kraj for */

    /* prikazhi rezultati */
    printf( "%s%17s\n", "Ocena", "Frekvencija" );

    /* ispechati gi frekvenciite vo tabularen format */
    for ( rating = 1; rating < FREQUENCY_SIZE; rating++ ) {
        printf( "%3d%17d\n", rating, frequency[ rating ] );
    } /* kraj for */

    return 0; /* uspeshen kraj */

} /* kraj main */
