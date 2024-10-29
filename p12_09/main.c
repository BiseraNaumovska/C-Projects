/*1. Само со користење на операторот за шифтирање да се напише
 * функција mnoziSoStepenOdDva која зема два целобројни аргументи:
 * broj и stepen и ја пресметува следната вредност:
    broj * 2^stepen;

*/
#include <stdio.h>

typedef struct{
    int broj;
    int stepen;
}BrojIStepen;

int mnozisostepen(BrojIStepen bs);

int main()
{
    BrojIStepen bs;
    int rez;

    bs.broj = 12;
    bs.stepen = 3;

    rez = mnozisostepen(bs);

    printf("%d pomnozeno so 2^%d e %d\n", bs.broj, bs.stepen, rez);

    return 0;
}

int mnozisostepen(BrojIStepen bs){
     return bs.broj << bs.stepen;
}
