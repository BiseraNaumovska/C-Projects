/*
2.    Модифицирај го програмот p04_02.c така да наместо
да е предефинирана вредноста на променливата counter,
треба на корисникот да му се овозможи тој да внесе
колку ученици има во класот.

3.    Модифицирај го претходниот програм (вежба 2)
така да просекот се пресметува како децимален број
со точност од 3 децимали.
*/

#include <stdio.h>

int main()
{
    int counter; /* brojach na vneseni oceni */
    int grade;   /* vrednost na ocena */
    int total;   /* suma na ocenite vneseni od korisnikot */
    float average; /* sredna vrednost na ocenite */
    int pom;

    /* inicijalizacija */
    total = 0;   /* inicijaliziraj total */
    //counter = 1; /* inicijaliziraj go brojachot na ciklusi */

    printf("Vnesi kolku uchenici ima vo klasot? ");
    scanf("%d", &counter);
    pom = counter;

    /* procesiranje */
    while ( counter > 0 ) {     /* povtori counter pati */
        printf( "Vnesi ocena: " ); /* prompt za vlez */
        scanf( "%d", &grade );     /* chitaj ocena od korisnikot */
        total = total + grade;     /* dodaj ja ocenata na total */
        counter = counter - 1;     /* namali go brojachot */
    } /* kraj na while */

    /* zavrshna faza */
    average = (float)total / pom; /* celobrojno delenje */

    printf( "Srednata vrednost na klasot e %.3f\n", average ); /* pechati rezultat */


    return 0;
}
