/*
2.      Прости броеви се броеви кои се деливи само со себе си и со
бројот 1. Напиши програм кој внесува n елементи во низа. Да се
овозможи функционалност да имаме променлив број на елементи во низата.
Во почетокот сите елементи да се иницијализираат на 1. Потоа да се
напише функција prosti која секој елемент од низата чиј индекс е прост
број, го поставува на 0. На крај од така добиената низа да се најде
начин да се испечатат простите броеви до n.
*/
#include <stdio.h>

void prosti(int niza[], int n);
int eProst(int broj);

int main()
{
    int n;
    printf("Vnesi vrednost za n \n");
    scanf("%d", &n);
    int niza[n];

    printf("Vnesi elementi vo niza \n");
    for(int i=0;i<n;i++){
        niza[i] = 1;
    }

    prosti(niza, n);

    printf("\nPechatenje na niza po transformacija: \n");
    for(int i = 0; i<n;i++){
        printf("niza[%d] = %5d\n", i,niza[i]);
    }

    return 0;
}

int eProst(int broj){
    if(broj <= 1){
        return 0;
    }
    for(int i=2;i<=broj/2;i++){
        if(broj%i == 0){
            return 0; // ne e prost
        }
    }
    return 1; // prost e
}

void prosti(int niza[], int n){
    for(int i=2;i<n;i++){
        if(eProst(i) == 1){
            niza[i] = 0;
        }
    }
}




