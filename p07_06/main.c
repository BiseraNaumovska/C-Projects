/* Program p07_06.c
   Opseg na proteganje na promenlivi */

#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void); // funkciski prototipovi
int x = 1; //globalna promenliva

int main()
{
    int x = 5; /* lokalna promenliva vo main */

    printf("lokalnoto x vo nadvoreshniot opseg na main e %d\n", x );

    { /* zapochni nov opseg na proteganje */
        int x = 7; /* lokalna promenliva vo noviot opsg */

        printf( "lokalnoto x vo vnatreshniot opseg na main e %d\n", x );
    } /* kraj na noviot opseg */

    printf( "lokalnoto x vo nadvoreshniot opseg na main e %d\n", x );

    useLocal();     /* useLocal ima avtomatska lokalna promenliva x */
    useStaticLocal(); /* useStaticLocal ima statichka lokalna promenliva x */
    useGlobal();      /* useGlobal koristi globalna x */
    useLocal();       /* useLocal ja reinicijalizira avtomatskata lokalna x */
    useStaticLocal(); /* ststichkata lokalna x ja dobiva svojata prethodna vrednost */
    useGlobal();      /* globalnata x isto taka ja sodrzhi svojtata vrednost */

    printf( "\nlokalnata x vo main e %d\n", x );

    return 0;
}


void useLocal( void )
{
    int x = 25;  /* se inicijalizira sekojpat koga useLocal e povikana */

    printf( "\nlokalnoto x vo useLocal e %d po vleguvanje vo useLocal\n", x );
    x++;
    printf( "lokalnoto x vo useLocal e %d pred da se izleze od useLocal\n", x );
} /* kraj na funkcijata useLocal */

/* useStaticLocal inicijalizira statichka lokalna promenliva x samo prviot pat koga
   se povikuva funkcijata; vrednosta na x se snima megju povicite na funkcijata */
void useStaticLocal( void )
{
    /* se inicijalizira samo prviot pat koga se povikuva useStaticLocal */
    static int x = 50;

    printf( "\nlokalnoto statichno x e %d pri vleguvanje vo useStaticLocal\n", x );
    x++;
    printf( "lokalnoto statichno x e %d pri izleguvanje od useStaticLocal\n", x );
} /* kraj na funkcijata useStaticLocal */

/* funkcijata useGlobal ja modificira globalnata promenliva x pri sekoj povik */
void useGlobal( void )
{
    printf( "\nglobalnoto x e %d pri vleguvanje vo useGlobal\n", x );
    x *= 10;
    printf( "globalnoto x e %d pri izleguvanje od useGlobal\n", x );
} /* kraj na funkcijata useGlobal */




