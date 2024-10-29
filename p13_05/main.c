/* Program p13_05.c
   Rabota so redovi */

#include <stdio.h>
#include <stdlib.h>

/* samo-referencirachka struktura */
struct queueNode {
    char data;                 /* definiraj podatoci od tipot char */
    struct queueNode *nextPtr; /* queueNode pokazhuvach */
}; /* kraj na strukturata queueNode */

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

/* funkciski prototipovi */
void printQueue( QueueNodePtr currentPtr );
int isEmpty( QueueNodePtr headPtr );
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr );
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr,
             char value );
void instructions( void );

/* zapochnuvanje so izvrshuvanjeto */
int main()
{
    QueueNodePtr headPtr = NULL; /* inicijaliziraj headPtr */
    QueueNodePtr tailPtr = NULL; /* inicijaliziraj tailPtr */
    int choice;                  /* korisnichki meni izbor */
    char item;                   /* char vnesen od korisnikot */

    instructions(); /* prikazhi meni */
    printf( "? " );
    scanf( "%d", &choice );

    /* se dodeka korisnikot ne vnese 3 */
    while ( choice != 3 ) {

        switch( choice ) {

        /* stavi vrednost vo red */
        case 1:
            printf( "Vnesi karakter: " );
            scanf( "\n%c", &item );
            enqueue( &headPtr, &tailPtr, item );
            printQueue( headPtr );
            break;

        /* izvadi vrednost od red */
        case 2:

            /* ako redot ne e prazen */
            if ( !isEmpty( headPtr ) ) {
                item = dequeue( &headPtr, &tailPtr );
                printf( "%c e izvaden od redot.\n", item );
            } /* kraj if */

            printQueue( headPtr );
            break;

        default:
            printf( "Greshen izbor.\n\n" );
            instructions();
            break;

        } /* kraj switch */

        printf( "? " );
        scanf( "%d", &choice );
    } /* kraj while */

    printf( "Kraj.\n" );

    return 0; /* uspeshen kraj */

} /* kraj main */

/* ispechati korisnichki instrukcii */
void instructions( void )
{
    printf ( "Vnesi izbor:\n"
           "   1 za dodavanje element vo redot\n"
           "   2 za vadenje element od redot\n"
           "   3 za kraj\n" );
} /* kraj na funkcijata instructions */

/* vnesi jazel na opashkata na redot */
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr,
             char value )
{
    QueueNodePtr newPtr; /* pokazhuvach do nov jazel */

    newPtr = malloc( sizeof( QueueNode ) );

    if ( newPtr != NULL ) { /* ima dovolno prostor */
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        /* ako e prazen, vnesi jazel kaj glavata */
        if ( isEmpty( *headPtr ) ) {
            *headPtr = newPtr;
        } /* kraj if */
        else {
            ( *tailPtr )->nextPtr = newPtr;
        } /* kraj else */

        *tailPtr = newPtr;
    } /* kraj if */
    else {
        printf( "%c ne e vnesen. Nema dovolno memorija.\n", value );
    } /* kraj else */

} /* kraj na funkcijata enqueue */

/* remove node from queue head */
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr )
{
    char value;           /* vrednost na jazelot */
    QueueNodePtr tempPtr; /* pokazhuvach kon privremen jazel */

    value = ( *headPtr )->data;
    tempPtr = *headPtr;
    *headPtr = ( *headPtr )->nextPtr;

    /* if queue is empty */
    if ( *headPtr == NULL ) {
        *tailPtr = NULL;
    } /* kraj if */

    free( tempPtr );

    return value;

} /* kraj na funkcijata dequeue */

/* Vrati 1 ako listata e prazna, 0 inaku */
int isEmpty( QueueNodePtr headPtr )
{
    return headPtr == NULL;

} /* kraj na funkcijata isEmpty */

/* Ispechati go redot */
void printQueue( QueueNodePtr currentPtr )
{

    /* ako redot e prazen */
    if ( currentPtr == NULL ) {
        printf( "Redot e prazen.\n\n" );
    } /* kraj if */
    else {
        printf( "Redot e:\n" );

        /* se dodeka ne e kraj na redot */
        while ( currentPtr != NULL ) {
            printf( "%c --> ", currentPtr->data );
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */

        printf( "NULL\n\n" );
    } /* kraj else */

}
