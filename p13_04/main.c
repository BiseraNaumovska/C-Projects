/* Program p13_04.c
   Program za stek (magacin) */
#include <stdio.h>
#include <stdlib.h>

/* samo-referencirachka struktura */
struct stackNode {
    int data;                  /* definiraj int podatoci */
    struct stackNode *nextPtr; /* stackNode pokazhuvach */
}; /* kraj na strukturata stackNode */

typedef struct stackNode StackNode; /* sinonim za struct stackNode */
typedef StackNode *StackNodePtr; /* sinonim za StackNode* */

/* prototipovi */
void push( StackNodePtr *topPtr, int info );
int pop( StackNodePtr *topPtr );
int isEmpty( StackNodePtr topPtr );
void printStack( StackNodePtr currentPtr );
void instructions( void );

/* pochetok na izvrshuvanjeto */
int main()
{
    StackNodePtr stackPtr = NULL; /* pokazhuva na vrvot na stekot */
    int choice; /* izbor na korisnikot od menito */
    int value;  /* korisnichki vnesena vrenost */

    instructions(); /* ispechati go menito */
    printf( "? " );
    scanf( "%d", &choice );

    /* dodeka korisnikot ne vnese 3 */
    while ( choice != 3 ) {

        switch ( choice ) {

        /* stavi vrednost na stek */
        case 1:
            printf( "Vnesi cel broj: " );
            scanf( "%d", &value );
            push( &stackPtr, value );
            printStack( stackPtr );
            break;

        /* izvadi vrednost od stek */
        case 2:

            /* ako stekot ne e prazen */
            if ( !isEmpty( stackPtr ) ) {
                printf( "Izvadenata vrednost e %d.\n", pop( &stackPtr ) );
            } /* kraj if */

            printStack( stackPtr );
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

/* ispechati instrukcii za korisnikot */
void instructions( void )
{
    printf( "Vnesi izbor:\n"
           "1 za stavanje vrednost na stek\n"
           "2 za vadenje vrednost od stek\n"
           "3 za kraj na programot\n" );
} /* kraj na funkcijata instructions */

/* Vnesi jazel na vrvot na stekot */
void push( StackNodePtr *topPtr, int info )
{
    StackNodePtr newPtr; /* pokazhuvach do noviot jazel */

    newPtr = malloc( sizeof( StackNode ) );

    /* vnesi jazel na vrvot na stekot */
    if ( newPtr != NULL ) {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    } /* kraj if */
    else { /* nema mesto */
        printf( "%d ne e vnesen. Nema dovolno memorija.\n", info );
    } /* kraj else */

} /* kraj na funkcijata push */

/* Izvadi jazel od vrvot na stekot */
int pop( StackNodePtr *topPtr )
{
    StackNodePtr tempPtr; /* pokazhuvach do privremen jazol */
    int popValue; /* vrednost na jazelot */

    tempPtr = *topPtr;
    popValue = ( *topPtr )->data;
    *topPtr = ( *topPtr )->nextPtr;
    free( tempPtr );

    return popValue;

} /* kraj na funkcijata pop */

/* Ispechati go stekot */
void printStack( StackNodePtr currentPtr )
{

    /* ako stekot e prazen */
    if ( currentPtr == NULL ) {
        printf( "Stekot e prazen.\n\n" );
    } /* kraj if */
    else {
        printf( "Stekot e:\n" );

        /* dodeka ne e kraj na stekot */
        while ( currentPtr != NULL ) {
            printf( "%d --> ", currentPtr->data );
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */

        printf( "NULL\n\n" );
    } /* kraj else */

} /* kraj na funkcijata printList */

/* Vrati 1 ako stekot e prazen,0 inaku */
int isEmpty( StackNodePtr topPtr )
{
    return topPtr == NULL;

}
