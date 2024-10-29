/*Chitanje i pechatenje na sekvencijalna datoteka */
#include <stdio.h>

int main()
{
    int account;     /* broj na smetka */
    char name[ 30 ]; /* ime na smetka */
    double balance;  /* bilans na smetka */

    FILE *cfPtr;     /* cfPtr = clients.dat pokazhuvach kon datoteka */

    /* fopen otvara datoteka; izlezi od programot ako ne mozhesh da ja
      otvorish datotekata */
    if ( ( cfPtr = fopen( "C:\\Users\\User\\Desktop\\QtWinSoft_praksa\\p12_12\\build\\Desktop_Qt_6_7_3_MinGW_64_bit-Debug\\clients.dat", "r" ) ) == NULL ) {
        printf( "Ne mozham da ja otvoram datotekata\n" );
    } /* kraj if */
    else { /* prochitaj broj na smetka, ime i bilans od datoteka */
        printf( "%-15s%-15s%s\n", "Br. smetka", "Ime", "Bilans" );
        fscanf( cfPtr, "%d%s%lf", &account, name, &balance );

        /* dodeka ne e kraj na datotekata */
        while ( !feof( cfPtr ) ) {
            printf( "%-15d%-13s%7.2f\n", account, name, balance );
            fscanf( cfPtr, "%d%s%lf", &account, name, &balance );
        } /* kraj while */

        fclose( cfPtr ); /* fclose ja zatvara datotekata */
    } /* kraj else */
    return 0; /* uspeshen kraj */
}
