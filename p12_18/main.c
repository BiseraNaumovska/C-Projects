/*Програмот кој ја извршува оваа работа е р12_07.с. Треба да забележиме дека датотеката
 * “credit.dat” се отвара за ажурирање (читање и запишување) во “rb+” модот.*/
/* Program p12_18.c

   Ovoj program chita od sluchajna datoteka, azhurira podatoci
   koi vekje postojat vo datotekata, sozdava novi podatoci
   koi treba da se smestat vo datotekata i brishe prethodno
   smesteni podatoci od datotekata */


#include <stdio.h>

struct clientData {
    int acctNum;          /* broj na smetka */
    char lastName[ 15 ];  /* prezime */
    char firstName[ 10 ]; /* ime */
    double balance;       /* bilans */
};

int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord (FILE *fPtr);
void newRecord (FILE *fPtr);
void deleteRecord (FILE *fPtr);

int main()
{
    FILE *cfPtr;
    int choice;

    if((cfPtr = fopen("credit.dat" , "rb+")) == NULL){
        //Отвори датотека за ажурирање (читање или запишување) во бинарен мод
        printf("Datotekata ne moze da se otvori \n");
    }else{
        while((choice = enterChoice()) !=5 ){
            switch(choice){
            case 1: //sozdadi text dat od sluchajna datoteka
                textFile(cfPtr);
                break;
            case 2: // azuriraj zapis
                updateRecord(cfPtr);
                break;
            case 3: // sozdadi zapis
                newRecord(cfPtr);
                break;
            case 4: // izbrishi postoechki zapis
                deleteRecord(cfPtr);
                break;
            default:
                break;
            }
        }
        fclose(cfPtr);
    }
    return 0;
}

void textFile(FILE *readPtr){
    FILE *writePtr; /* pokazhuvach kon accounts.txt */

    /* sozdadi clientData so prazna informacija */
    struct clientData client = { 0, "", "", 0.0 };

    /* fopen otvara datoteka; izlezi ako ne mozhe da se otvori datotekata */
    if ( ( writePtr = fopen( "accounts.txt", "w" ) ) == NULL ) {
        printf( "Datotekata ne mozhe da se otvori.\n" );
    } /* kraj if */
    else {
        rewind( readPtr ); /* postavi go pokazhuvachot na pochetokot na datotekata */
        fprintf( writePtr, "%-8s%-16s%-11s%10s\n",
                "Smetka", "Prezime", "Ime","Bilans" );

        /* iskopiraj gi site zapisi od sluchajna datoteka vo
         tekstualna datoteka */
        while ( !feof( readPtr ) ) {
            fread( &client, sizeof( struct clientData ), 1, readPtr );

            /* zapishi ediniechen zapis vo tekstualna datoteka */
            if ( client.acctNum != 0 ) {
                fprintf( writePtr, "%-8d%-16s%-11s%10.2f\n",
                        client.acctNum, client.lastName,
                        client.firstName, client.balance );
            } /* kraj if */
        } /* kraj while */

        fclose( writePtr ); /* fclose ja zatvora datotekata */
    }


}


void updateRecord( FILE *fPtr )
{
    int account;        /* broj na smetka */
    double transaction; /* vrednost na transakcijata */

    /* sozdadi clientData so prazna informacija */
    struct clientData client = { 0, "", "", 0.0 };

    /* zemi broj na smetka koja treba da se azhurira */
    printf( "Vnesi broj na smetka za azhuriranje ( 1 - 100 ): " );
    scanf( "%d", &account );

    /* premesti go datotechniot pokazhuvach na tochnata
      pozicija vo datotekata */
    fseek( fPtr, ( account - 1 ) * sizeof( struct clientData ),
          SEEK_SET );

    /* prochitaj zapis od datotekata */
    fread( &client, sizeof( struct clientData ), 1, fPtr );

    /* objavi greshka ako smetkata ne postoi */
    if ( client.acctNum == 0 ) {
        printf( "Smetkata #%d nema informacii.\n", account );
    } /* kraj if */
    else { /* azhuriraj zapis */
        printf( "%-8d%-16s%-11s%10.2f\n\n",
               client.acctNum, client.lastName,
               client.firstName, client.balance );

        /* pobaraj iznos na transakcijata od korisnikot */
        printf( "Vnesi priliv ( + ) ili odliv ( - ): " );
        scanf( "%lf", &transaction );
        client.balance += transaction; /* azhuriraj bilans na smetka */

        printf( "%-8d%-16s%-11s%10.2f\n",
               client.acctNum, client.lastName,
               client.firstName, client.balance );

        /* premesti go datotechniot pokazhuvach na tochniot
         zapis vo datotekata */
        fseek( fPtr, ( account - 1 ) * sizeof( struct clientData ),
              SEEK_SET );

        /* zapishi go azhuriraniot zapis preku stariot zapis */
        fwrite( &client, sizeof( struct clientData ), 1, fPtr );
    } /* kraj else */
} /* kraj na funkcijata updateRecord */

/* brishi postoechki zapis */
void deleteRecord( FILE *fPtr )
{

    struct clientData client; /* chuva zapis prochitan od datotekata */
    struct clientData blankClient = { 0, "", "", 0 }; /* prazen klient */

    int accountNum; /* broj na smetka */

    /* zemi broj na smetka za brishenje */
    printf( "Vnesi broj na smetka za brishenje ( 1 - 100 ): " );
    scanf( "%d", &accountNum );

    /* postavi go datotechniot pokazhuvach na tochniot zapis */
    fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
          SEEK_SET );

    /* prochitaj zapis od datotekata */
    fread( &client, sizeof( struct clientData ), 1, fPtr );

    /* ispechati poraka ako zapisot ne postoi */
    if ( client.acctNum == 0 ) {
        printf( "Smetkata %d ne postoi.\n", accountNum );
    } /* kraj if */
    else { /* izbrishi zapis */

        /* postavi go pokazhuvachot na tochniot zapis vo datotekata */
        fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
              SEEK_SET );

        /* zameni go posteochkiot zapis so prazen zapis */
        fwrite( &blankClient,
               sizeof( struct clientData ), 1, fPtr );
    } /* kraj else */
} /* kraj na funkcijata deleteRecord */

/* sozdadi i vnesi zapis */
void newRecord( FILE *fPtr )
{
    /* sozdadi clientData so prazna informacija */
    struct clientData client = { 0, "", "", 0.0 };

    int accountNum; /* broj na smetka */

    /* zemi broj na smetkata koja treba da se sozdade */
    printf( "Vnesi broj na smetka ( 1 - 100 ): " );
    scanf( "%d", &accountNum );

    /* postavi go datotechniot pokazhuvach na tochniot zapis */
    fseek( fPtr, ( accountNum - 1 ) * sizeof( struct clientData ),
          SEEK_SET );

    /* prochitaj zapis od datotekata */
    fread( &client, sizeof( struct clientData ), 1, fPtr );

    /* ispechati poraka ako zapisot postoi */
    if ( client.acctNum != 0 ) {
        printf( "Smetkata #%d vekje e sozdadena.\n",
               client.acctNum );
    } /* kraj if */
    else { /* sozdadi zapis */

        /* vnesi prezime, ime i bilans */
        printf( "Vnesi prezime, ime i bilans\n? " );
        scanf( "%s%s%lf", &client.lastName, &client.firstName, &client.balance );

        client.acctNum = accountNum;

        /* postavi go datotechniot pokazhuvach na toachnata pozicija */
        fseek( fPtr, ( client.acctNum - 1 ) * sizeof( struct clientData ), SEEK_SET );

        /* vnesi zapis vo datotekata */
        fwrite( &client,
               sizeof( struct clientData ), 1, fPtr );
    } /* kraj else */
} /* kraj na funkcijata newRecord */

/* ovozmozhi mu na korisnikot da vnese izbor od menito */
int enterChoice( void )
{
    int menuChoice; /* izbor na korisnikot */

    /* ispechati gi mozhnite opcii */
    printf( "\nVnesi izbor\n"
           "1 - Sozdadi formatiran tekstualen fajl\n"
           "    \"accounts.txt\" za pechatenje\n"
           "2 - Azhuriraj smetka\n"
           "3 - Dodadi nova smetka\n"
           "4 - Izbrishi smetka\n"
           "5 - Kraj na programot\n? " );

    scanf( "%d", &menuChoice ); /* vnesi izbor */

    return menuChoice;

}




