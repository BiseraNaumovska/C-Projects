/* Program p12_12.c
   Sozadavawe na datoteka so sekvencijalen pristap */
#include <stdio.h>

int main()
{
    int account;
    char name[30];
    double balance;

    FILE *cfPtr;
    /* fopen otvara datoteka. Izlezi od programot ako ne mozhesh da
      otvorish datoteka*/
    if((cfPtr = fopen("clients.txt" , "w")) == NULL){
        printf("Datotekata ne moze da se otvori \n");
    }else{
        printf( "Vnesi broj na smetka, ime, i bilans.\n" );
        printf( "Vnesi EOF za kraj.\n" );
        printf( "? " );
        scanf( "%d%s%lf", &account, name, &balance );

    /* zapishi broj na smetka, ime i bilans vo datotekata
         so koristenje na fprintf */


        while(!feof(stdin)){
            fprintf( cfPtr, "%d %s %.2f\n", account, name, balance );
            printf( "? " );
            scanf( "%d%s%lf", &account, name, &balance );
        }
        fclose(cfPtr);
    }


    return 0;
}
