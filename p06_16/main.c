/*
2.	Напиши програма која вчитува датуми во облик gg/mm/dd,
gg-mm-dd и gg+mm+dd и ги испечаува така да наместо бројот
на месецот се испечати имато на месецот.

Пример:
Vnesi datum: 2005+06+01
Vneseniot datum e 1 juni 2005 godina.

*/
#include <stdio.h>

int main()
{
    int den,mesec,godina;
    char m[15];

    printf("Vnesi datum vo oblik gg/mm/dd, gg-mm-dd ili gg+mm+dd: ");
    scanf("%d%*c%d%*c%d", &den, &mesec, &godina);


    switch(mesec){
    case 1:
        strcpy(m, "Januari");
        break;
    case 2:
        strcpy(m, "Februari");
        break;
    case 3:
        strcpy(m, "Mart");
        break;
    case 4:
        strcpy(m, "April");
        break;
    case 5:
        strcpy(m, "Maj");
        break;
    case 6:
        strcpy(m, "Juni");
        break;
    case 7:
        strcpy(m, "Juli");
        break;
    case 8:
        strcpy(m, "Avgust");
        break;
    case 9:
        strcpy(m, "Septemvri");
        break;
    case 10:
        strcpy(m, "Oktomvri");
        break;
    case 11:
        strcpy(m, "Noemvri");
        break;
    case 12:
        strcpy(m, "Dekemvri");
        break;
    }

    printf("Vneseniot datum e %d %s %d godina \n", den, m, godina);


    return 0;
}
