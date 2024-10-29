/* Program p13_01.c
   Manipuliranje so lista */
#include <stdio.h>
#include <stdlib.h>

struct listNode{
    char data;
    struct listNode *nextPtr;
};
typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert( ListNodePtr *sPtr, char value );
char delete( ListNodePtr *sPtr, char value );
int isEmpty( ListNodePtr sPtr );
void printList( ListNodePtr currentPtr );
void instructions( void );

int main(){

    ListNodePtr startPtr = NULL;
    int choice;
    char item;

    instructions();
    printf("?");
    scanf("%d", &choice);

    while(choice != 3){
        switch(choice){
        case 1:
            printf("Vnesi karakter ");
            scanf("\n%c", &item);
            insert(&startPtr, item);
            printList(startPtr);
            break;
        case 2: //ako listata ne e prazna
            if(!isEmpty(startPtr)){
                printf("Vnesi karakter za brishenje: ");
                scanf("%d" , &item);

                if(delete(&startPtr, item)){
                    printf("%c deleted. \n", item);
                    printList(startPtr);
                }else{
                    printf("%c ne e vo listata \n", item);
                }
            }else{
                printf("Listata e prazna \n");
            }
            break;
        default:
            printf( "Greshen izbor.\n\n" );
            instructions();
            break;
        }
        printf( "? " );
        scanf( "%d", &choice );
    }

    return 0;
}

void instructions(void){
    printf( "Vnesi izbor:\n"
           "   1 za vnesuvanje element vo lista.\n"
           "   2 za brishenje element od lista.\n"
           "   3 za kraj.\n" );

}

void insert(ListNodePtr *sPtr, char value){
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;

    newPtr = malloc(sizeof(ListNode)); // sozdadi jazol
    if(newPtr != NULL){
        //ako ima mesto
        newPtr->data = value;
        newPtr->nextPtr = NULL;
        previousPtr = NULL;
        currentPtr = *sPtr;

        while(currentPtr != NULL && value > currentPtr->data){
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        //vnesi nov jazel na pochetok na lista
        if(previousPtr == NULL){
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }else{
            //vnesi nov jazol pomegju previous i current
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }else{
        printf( "%c ne e vnesen. Nema dovolno memorija.\n", value );
    }
}

char delete( ListNodePtr *sPtr, char value )
{
    ListNodePtr previousPtr; /* pokazhuvach do prethodniot element vo listata */
    ListNodePtr currentPtr;  /* pokazhuvach do tekovniot jazel */
    ListNodePtr tempPtr;     /* pokazhuvach do privremen element */

    /* izbrishi go prviot jazel */
    if ( value == ( *sPtr )->data ) {
        tempPtr = *sPtr; /* chuvaj go jazelot shto se brishe */
        *sPtr = ( *sPtr )->nextPtr; /* sredi ja listata */
        free( tempPtr ); /* oslobodi go nepotrebniot jazel */
        return value;
    } /* kraj if */
    else {
        previousPtr = *sPtr;
        currentPtr = ( *sPtr )->nextPtr;

        /* vrti dodeka ne ja najdesh tochnata pozicija */
        while ( currentPtr != NULL && currentPtr->data != value ) {
            previousPtr = currentPtr;         /* odi do ...   */
            currentPtr = currentPtr->nextPtr; /* ... sledniot jazel */
        } /* kraj while */

        /* izbrishi go jazelot na currentPtr */
        if ( currentPtr != NULL ) {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free( tempPtr );
            return value;
        } /* kraj if */

    } /* kraj else */

    return '\0';

} /* kraj na funkcijata delete */

/* Vrati 1 ako listata e prazna, 0 inaku */
int isEmpty( ListNodePtr sPtr )
{
    return sPtr == NULL;

} /* kraj na funkcijata isEmpty */

/* Ispechati ja listata */
void printList( ListNodePtr currentPtr )
{

    /* ako listata e prazna */
    if ( currentPtr == NULL ) {
        printf( "Listata e prazna.\n\n" );
    } /* kraj if */
    else {
        printf( "Listata e:\n" );

        /* dodeka ne e kraj na listata */
        while ( currentPtr != NULL ) {
            printf( "%c --> ", currentPtr->data );
            currentPtr = currentPtr->nextPtr;
        } /* kraj while */

        printf( "NULL\n\n" );
    } /* kraj else */

}













