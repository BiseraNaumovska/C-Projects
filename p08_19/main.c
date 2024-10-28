/*
3.  Палиндроми се низи од букви што се читаат исто и оддесно на лево и
одлево на десно. На пример зборот “radar” е палиндром.
Да се напише програм во кој внесуваме низа од карaактери.
Треба да имаме функција palindrom која враќа вредност 1
ако стрингот е палиндром или 0 инаку.

*/
#include <stdio.h>
#include <string.h>

int palindrom(char niza[], int n);

int main()
{
    char niza[100];

    printf("Vnesi zbor za proverka\n");
    scanf("%s", niza);

    // sega sakam da vidam kolku bukvi ima vneseno za da ja znam goleminata na nizata
    int brojac = strlen(niza);

    printf("Nizata ima %d elementi \n", brojac);

    int daliE = palindrom(niza,brojac);
    if(daliE == 1){
        printf("Zborot e palindrom\n");
    }else{
        printf("Zborot ne e palindrom \n");
    }

    return 0;
}


int palindrom(char niza[], int n){
    int high = n-1;
    int low = 0;
    while (low<high){
        if(niza[low] != niza[high]){
            return 0;
        }
        low++;
        high--;
    }
    return 1;

}
