
/*2. Да се напише програма која служи како генератор на телефонски
 * броеви. Знаеме дека полесно се паметат поими од броеви, па
 * така некои од компаниите имаат телефонски броеви кои ја означуваат
 *  дејноста или името на компанијата.
Нека ни се подредени буквите на следниот начин:
Цифра	Буква
2       ABC
3       DEF
4       GHI
5       JKL
6       MNO
7       PQR
8       STU
9       VWX
0       YZ
а) За даден седумбуквен стринг да се изгенерира бројот на телефон.
Пример: “TELEKOM” = 8353566
б) За даден седмоцифрен број да се изгенерираат што поголем број на
стрингови. Да се внимава дека 0 има само две букви.

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    int cifra;
    char bukvi[4];
} CifraMapa;

char* dobavi_bukvi(int cifra, CifraMapa *mapi, int golemina) {
    for (int i = 0; i < golemina; i++) {
        if (mapi[i].cifra == cifra) {
            return mapi[i].bukvi;
        }
    }
    return NULL;
}

void string_vo_telefon(char *string, CifraMapa *mapi, int golemina) {
    printf("Telefonskiot broj za '%s' e: ", string);
    for (int i = 0; i < 7; i++) {
        char bukva = string[i];
        int cifra = -1;


        for (int j = 0; j < golemina; j++) {
            if (strchr(mapi[j].bukvi, bukva) != NULL) {
                cifra = mapi[j].cifra;
                break;
            }
        }

        if (cifra != -1) {
            printf("%d", cifra);
        } else {
            printf("\nError!\n");
            return;
        }
    }
    printf("\n");
}


void generiraj_stringovi(char *broj, int indeks, char *segasen, int dolzina, CifraMapa *mapi, int golemina) {

    if (indeks == dolzina) {
        segasen[dolzina] = '\0';
        printf("%s\n", segasen);
        return;
    }


    int cifra = broj[indeks] - '0';
    char *bukvi = dobavi_bukvi(cifra, mapi, golemina);

    if (bukvi == NULL) {
        printf("Error!\n");
        return;
    }


    for (int i = 0; bukvi[i] != '\0'; i++) {
        segasen[indeks] = bukvi[i];
        generiraj_stringovi(broj, indeks + 1, segasen, dolzina, mapi, golemina);
    }
}

int main() {
    int izbor;
    char input[8];
    char rezultat[8];

    CifraMapa mapi[10] = {
        {0, "YZ"},    // 0
        {1, ""},      // 1 ne go koristime
        {2, "ABC"},   // 2
        {3, "DEF"},   // 3
        {4, "GHI"},   // 4
        {5, "JKL"},   // 5
        {6, "MNO"},   // 6
        {7, "PQR"},   // 7
        {8, "STU"},   // 8
        {9, "VWX"}    // 9
    };

    do {
        printf("\n1. Pretvori string od 7 bukvi vo telefonski broj\n");
        printf("2. Generiraj stringovi od 7 cifti\n");
        printf("0. IZLEZ\n");
        printf("Izbor: ");
        scanf("%d", &izbor);

        switch (izbor) {
        case 1:
            printf("Vnesete string so sedum bukvi: ");
            scanf("%s", input);
            if (strlen(input) != 7) {
                printf("Greshka, 7 bukvi rekov !!!!!\n");
            } else {
                string_vo_telefon(input, mapi, 10);
            }
            break;
        case 2:
            printf("Vnesi sedmorocifren broj: ");
            scanf("%s", input);
            if (strlen(input) != 7) {
                printf("So sedum cifri rekov !!!!!\n");
            } else {
                printf("Mozni stringovi:\n");
                generiraj_stringovi(input, 0, rezultat, 7, mapi, 10);
            }
            break;
        case 0:
            printf("Izlez.\n");
            break;
        default:
            printf("ERROR.\n");
        }
    } while (izbor != 0);

    return 0;
}
