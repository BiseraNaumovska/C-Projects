/*
1.  Напиши програм кој вчитува вредности за температури за
секој ден од месецот и наоѓа средна месечна температура. Да се земе
предвид дека различни месеци имаат различен број на денови.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEN31 31
#define DEN30 30
#define DEN28 28

float averageTemeraturi(float temperaturi[], int brojDenovi);

int main()
{
    char mesec[10];
    int i;
    int brojDenovi = 0;
    float temperatura, suma = 0;
    printf("Za koj mesec ke vchituvash temperaturi? \n");
    scanf("%s", mesec);

    if (strcmp(mesec, "Januari") == 0 || strcmp(mesec, "Mart") == 0 ||
        strcmp(mesec, "Maj") == 0 || strcmp(mesec, "Juli") == 0 ||
        strcmp(mesec, "Avgust") == 0 || strcmp(mesec, "Oktomvri") == 0 ||
        strcmp(mesec, "Dekemvri") == 0) {
        brojDenovi = DEN31;
    } else if (strcmp(mesec, "April") == 0 || strcmp(mesec, "Juni") == 0 ||
               strcmp(mesec, "Septemvri") == 0 || strcmp(mesec, "Noemvri") == 0) {
        brojDenovi = DEN30;
    } else if (strcmp(mesec, "Februari") == 0) {
        brojDenovi = DEN28;
    } else {
        printf("Nepoznat mesec.\n");
        return 1;
    }

    float temperaturi[brojDenovi];

    for(i=0;i<brojDenovi;i++){
        scanf("%f", &temperaturi[i]);
    }
    printf("\n Temperaturite vo mesecot se: \n");
    for(i=0;i<brojDenovi;i++){
        printf("Den %2f -> %3.3f\n",i+1, temperaturi[i]);
    }

    //funkcija da upotrebam shto ke presmeta average temperatura
    printf("\nSredna mesechna temperatura za mesec %s = %10f\n", mesec, averageTemeraturi(temperaturi, brojDenovi));


    return 0;
}

float averageTemeraturi(float temperaturi[], int brojDenovi){

    float average = 0.0;
    for(int i=0;i<brojDenovi;i++){
        average = average + temperaturi[i];
    }

    return average/brojDenovi;


}

