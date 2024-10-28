/*Koristenje na indeksi i na pokazhuvachi
   so nizi */

#include <stdio.h>

int main()
{
    int b[] = {10,20,30,40};
    int *bPtr = b;
    int i;  //brojac
    int offset; // brojac

    printf("Nizata b ispechatena preku indeksi na nizata: \n");

    for(i=0;i<4;i++){
        printf("b[%d] = %d \n", i, b[i] );
    }
    printf("\n Pokazuvachka- offset notacija kade pokazuvachot e imeto na nizata \n");

    for(offset = 0; offset<4;offset++){
        printf("*(b+%d) = %d\n", offset, *(b+offset));
    }

    printf("\nNotacija so pokazuvach i indeksi\n");

    for(i=0;i<4;i++){
        printf("bPtr[%d] = %d\n",i, bPtr[i]);
    }
    printf( "\nPokazhuvachka/ofset notacija\n" );
    for ( offset = 0; offset < 4; offset++ ) {
        printf( "*( bPtr + %d ) = %d\n", offset, *( bPtr + offset ) );
    }




    return 0;
}
