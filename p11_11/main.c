/*Koristenje na getchar i puts */
#include <stdio.h>

int main()
{
    char c;              /* promenliva koja go sodrrzhi karakterot koj e korisnichki vlez */
    char sentence[ 80 ]; /* niza od karakteri */
    int i = 0;           /* inicijaliziraj brojach i */

    /* kazhi mu na korisnikot da vnese linija tekst */
    puts( "Vnesi linija tekst:" );

    /* iskoristi ja getchar za da go prochitash sekoj karakter */
    while ( ( c = getchar() ) != '\n') {
        sentence[ i++ ] = c;
    } /* kraj while */

    sentence[ i ] = '\0'; /* terminiraj go stringot */

    /* iskoristi ja puts za da ispechatish rechenicata */
    puts( "\nVnesenata linija tekst e:" );
    puts( sentence );

    return 0; /* uspeshen kraj */

}
