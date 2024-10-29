/*Примерот р12_16.с запишува податоци во датотеката “credit.dat”.
 * Овде се користи комбинација од наредбите fseek и fwrite за да
 * се запишат податоци на соодветно место во датотеката. Функцијата
 * fseek го поставува покажувачот на тековна позиција во датотека на
 *  специфична позиција во датотеката, на која потоа fwrite запишува
 *  податоци.*/

#include <stdio.h>

/* definicija na strukturata clientData */
struct clientData {
    int acctNum;          /* broj na smetka */
    char lastName[ 15 ];  /* prezime */
    char firstName[ 10 ]; /* ime */
    double balance;       /* bilans */
}; /* kraj na strukturata clientData */

int main()
{
    FILE *cfPtr; /* pokazhuvach kon credit.dat */

    /* sozdadi clientData so prazna informacija */
    struct clientData client = { 0, "", "", 0.0 };

    /* fopen otvara datoteka; izlezi ako datotekata na mozhe da se otvori */
    if ( ( cfPtr = fopen( "credit.txt", "rb+" ) ) == NULL ) {
        printf( "Datotekata ne mozhe da se otvori.\n" );
    } /* kraj if */
    else {

        /* baraj od korisnikot da vnese broj na smetka */
        printf( "Vnesi broj na smetka"
               " ( 1 to 100, 0 za kraj )\n? " );
        scanf( "%d", &client.acctNum );

        /* korisnikot vnesuva podatoci koi se kopiraat vo datotekata */
        while ( client.acctNum != 0 ) {

            /* korisnikot vnesuva prezime, ime i bilans */
            printf( "Vnesi prezime, ime i bilans\n? " );

            /* postavi gi vrednostite za lastName, firstName
            i balance vo zapisot */
            fscanf( stdin, "%s%s%lf", client.lastName,
                   client.firstName, &client.balance );

            /* baraj ja pozicijata vo datotekata kade
            shto treba da go vnesesh zapisot */
            fseek( cfPtr, ( client.acctNum - 1 ) * sizeof( struct clientData ), SEEK_SET );

            /* zapishi gi informaciite vo datotekata */
            fwrite( &client, sizeof( struct clientData ), 1, cfPtr );

            /* dali ushte kje se vnesua? */
            printf( "Vnesi broj na smetka\n? " );
            scanf( "%d", &client.acctNum );
        } /* kraj while */

        fclose( cfPtr ); /* fclose ja zatvora datotekata */
    } /* kraj else */

    return 0; /* uspeshen kraj */
}
