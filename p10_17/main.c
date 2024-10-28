/*Вообичаен начин на користење на функциски покажувачи е во системи
 * кои имаат мени. Корисникот може да избере опција од менито. Секоја
 *  опција опслужува посебна функција. Покажувачите кон секоја од
 *  функциите се сместени во низа од покажувачи. Изборот на
 *  корисникот влегува како индекс во низата и елементот покажувач
 *  кон функцијата се користи за да се повика соодветната функција.
    Програмот р10_17.с е пример за користење на механизамот за
дефинирање и користење на покажувачи кон функции за оваа намена.
*/
/* Program p10_17.c
   Demonstracija na niza od pokazhuvachi kon funkcii */


#include <stdio.h>

void function1( int a );
void function2( int b );
void function3( int c );

int main()
{
    /* inicijaliziraj niza od 3 pokazhuvachi kon funkcii taka da
   sekoja zema int argument i vrakja void */
    void (*f[ 3 ])( int ) = { function1, function2, function3 };

    int choice; /* promelniva koja go sodrzhi izborot na korisnikot */

    printf( "Vnesi broj megju 0 i 2, 3 za kraj: " );
    scanf( "%d", &choice );

    /* procesiraj go izborot na korisnikot */
    while ( choice >= 0 && choice < 3 ) {

        /* povikaj ja funkcijata koja se naogja na lokacijata na izborot na korisnikot
      vo nizata f i predaj i go izborot kako argument */
        (*f[ choice ])( choice );

        printf( "Vnesi broj megju 0 i 2, 3 za kraj: ");
        scanf( "%d", &choice );
    } /* kraj while */

    printf( "Izvrshuvanjeto na programata zavrshi.\n" );

    return 0; /* uspeshen kraj */

} /* kraj main */

void function1( int a )
{
    printf( "Vnese %d pa ja povika function1\n\n", a );
} /* kraj na function1 */

void function2( int b )
{
    printf( "Vnese %d pa ja povika function2\n\n", b );
} /* kraj na function2 */

void function3( int c )
{
    printf( "Vnese %d pa ja povika function3\n\n", c );
}
