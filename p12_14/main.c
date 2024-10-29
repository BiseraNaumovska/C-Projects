/*Следнит пример ја користи наредбата rewind за поставување на
 * покажувачот на датотечната позиција на почетокот на датотеката.
 * Програмот му дава можност на корисникот да ги излиста корисниците
 * со биланс нула, кредитен или дебитен биланс.*/

#include <stdio.h>

int main()
{
    int request;
    int account;
    double balance;
    char name[30];
    FILE *cfPtr; // podatochen pokazuvach kon clients.dat

    if((cfPtr = fopen("clients.txt" , "r")) == NULL){
        printf("Ne moze da se otvori datotekata \n");
    }else{
        printf( "Vnesi baranje\n"
               " 1 - Ispechati gi smetkite so bilans nula\n"
               " 2 - Ispechati gi smetkite so krediten bilans\n"
               " 3 - Ispechati gi smetkite so debiten bilans\n"
               " 4 - Izlezi\n? " );
        scanf("%d" , &request);

        while(request != 4){
            switch(request){
            case 1:
                printf("\nSmetki so bilans nula: \n");
                while(!feof(cfPtr)){
                    if(balance == 0){
                        printf("%-10d%-13s%7.2f\n", account, name, balance);
                    }
                    fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
                }
                break;
            case 2:
                printf("\nSmetki so krediten bilans: \n");
                while(!feof(cfPtr)){
                    if(balance < 0){
                        printf("%-10d%-13s%7.2f\n", account, name, balance);
                     }
                    fscanf(cfPtr, "%d%s%lf", &account, name, &balance);
                }
                break;
            case 3:
                printf( "\nSmetki so debiten bilans:\n" );

                /* chitaj ja sodrzhinata na datotekata (do eof) */
                while ( !feof( cfPtr ) ) {
                    if ( balance > 0 ) {
                        printf( "%-10d%-13s%7.2f\n", account, name, balance );
                    }
                    /* chitaj broj na smetka, ime i bilans od datoteka */
                    fscanf( cfPtr, "%d%s%lf", &account, name, &balance );
                }
                break;

            }
            rewind( cfPtr ); /* vrati go cfPtr na pochetokot na datotekata */
            printf( "\n? " );
            scanf( "%d", &request );

        }
        printf( "Kraj.\n" );
        fclose( cfPtr );

    }


    return 0;
}
