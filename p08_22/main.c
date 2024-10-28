/*
Проект1:
Да се напише програма која за дадена низа од n (n<100) елементи, пресметува
средна вредност,
медијана,
најфреквентна вредност во низата и
дава хистограм со бројот на појавувања на секоја од вредностите во низата.

Сите пресметки и испишувањето на
хистограмот треба да се направат во посебни функции.

Под медијана се подразбира среден елемент на сортирана низа.
Ако низата има парен број елементи, медијана е средната вредност од двата
елемента кои се на средината на сортираната низа.

*/

#include <stdio.h>
#include <stdlib.h>

float srednaVrednost(int niza[], int n);
float medijana(int niza[], int n);
void histogram(int niza[], int n);
void sortirajNiza(int niza[], int n);
int najFrekfentna(int niza[], int n);

int main()
{
    int n;
    printf("Vnesi dolzina na niza <100!\n");
    scanf("%d", &n);
    if(n>=100){
        return -1;
    }

    int niza[n];
    printf("Elementi na nizata se: \n");
    for(int i=0;i<n;i++){
        niza[i] = 1+ rand()%20;
        printf("%d ", niza[i]);
    }
    printf("\n");
    printf("Sredna vrednost na elementite na nizata e: %.3f \n", srednaVrednost(niza,n));
    sortirajNiza(niza,n);
    printf("Sreden element - medijana vo nizata e: %.3f \n", medijana(niza, n));
    printf("Najfrekfentna vrednost vo nizata e: %d \n", najFrekfentna(niza,n));
    printf("Histogram: \n");
    printf("%10s%15s%10s \n", "Element", "Pojavuvanje", "Dzvezdi");
    histogram(niza,n);

    return 0;
}

float srednaVrednost(int niza[], int n){
    float total = 0.0;
    for(int i=0;i<n;i++){
        total = total + niza[i];
    }
    total = total/n;
    return total;
}

void sortirajNiza(int niza[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(niza[j] > niza[j+1]){
                int temp = niza[j];
                niza[j] = niza[j+1];
                niza[j+1] = temp;
            }
        }
    }
    printf("Sortirana niza: \n");
    for(int i=0;i<n;i++){
        printf("%d  ", niza[i]);
    }
    printf("\n");
}

int najFrekfentna(int niza[], int n){
    int maxBrojac = 0;
    int frekfentna = niza[0];

    for(int i=0; i<n; i++){
        int brojac = 1;
        for(int j=i+1; j<n; j++){
            if(niza[i] == niza[j]){
                brojac++;
            }
        }
        if(brojac > maxBrojac){
            maxBrojac = brojac;
            frekfentna = niza[i];
        }
    }
    return frekfentna;
}

float medijana(int niza[], int n){

    if(n%2 == 0){   // ako ima paren broj na elementi
        int sum = 0;
        sum = niza[n/2] + niza[n/2-1];
        return (float)sum/2;
    }else{ // ako nema paren broj na elementi
        return niza[n/2];
    }
}
void histogram(int niza[], int n){
    int max = 20; // preeska definirav random vrednosti do 20, pa vo najlosh sluchaj moze da se padnat site od 1 do 40 po ednash
    int frekvencija[max + 1];

    for (int i = 0; i <= max; i++) {
        frekvencija[i] = 0;
    }


    for (int i = 0; i < n; i++) {
        frekvencija[niza[i]]++;
    }

    // histogram
    for (int i = 1; i <= max; i++) {
        if (frekvencija[i] > 0) {
            printf("%6d%14d\t    ", i, frekvencija[i]);
            for (int j = 0; j < frekvencija[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}




