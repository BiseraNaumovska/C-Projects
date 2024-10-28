/*
5.Да се напише програма која симулира селекциско сортирање.
Селекциското сортирање го бара најмалиот елемент во низата и го
заменува со првиот елемент. Сега, на прво место сигурно ни се наоѓа
најмалиот елемент во низата. Потоа, во остатокот од низата, од вториот
до n-тиот елемент, повторно го бараме новиот најмал елемент и му ја
заменуваме вредноста со вториот елемент од низата итн. Ова сортирање
има слични процесирачки капацитети како сортирање со методот на меурче.

а) Да се напише итеративна верзија на функцијата selekcija која го врши селекциското сортирање.
б) Да се напише рекурзивна верзија на селекциското сортирање.
в) Да се одговори зошто процесирачките капацитети на ова сортирање се слични како оние со методот на меурче.

*/
#include <stdio.h>
#include <stdlib.h>

#define N 20

void selekcijaI(int niza[], int n);
void selekcijaR(int niza[], int n, int index);

int main()
{
    int niza[N];
    for(int i =0;i<N;i++){
        niza[i] = 1 + rand()%100;
    }

    printf("Nizata pred sortinja e: \n");
    for(int i=0;i<N;i++){
        printf("%d ",niza[i]);
    }

    selekcijaI(niza, N);
    printf("\n");

    printf("Nizata po iterativno sortiranje e: \n");
    for(int i = 0; i < N; i++){
        printf("%d ", niza[i]);
    }
    printf("\n");


    for(int i = 0; i < N; i++){
        niza[i] = 1 + rand() % 100;
    }

    printf("Nizata pred rekursivno sortiranje e: \n");
    for(int i = 0; i < N; i++){
        printf("%d ", niza[i]);
    }
    printf("\n");


    selekcijaR(niza, N, 0);

    printf("Nizata po rekursivno sortiranje e: \n");
    for(int i = 0; i < N; i++){
        printf("%d ", niza[i]);
    }
    printf("\n");


    return 0;
}




void selekcijaI(int niza[], int n){
    for(int i=0;i<n-1;i++){
        int prvmin = i; // go zachuvuvame prviot element
        for(int j=i+1;j<n;j++){
            if(niza[prvmin] > niza[j]){
                prvmin = j;
            }
        }
        int temp = niza[prvmin];
        niza[prvmin] = niza[i];
        niza[i] = temp;
    }
}

void selekcijaR(int niza[], int n, int index){
    if(index == n-1){
        return; // site elementi se sortirani za da zavrshi rekurzijava
    }
    int prvmin = index;
    for(int i=index+1; i<n ;i++){
        if(niza[i] < niza[prvmin]){
            prvmin = i;
        }
    }
    int temp = niza[prvmin];
    niza[prvmin] = niza[index];
    niza[index] = temp;

    selekcijaR(niza, n, index + 1);
}

/*
временска комплексност од O(n²).
Во двете сортирања имаме вложени циклуси кои поминуваат преку елементите на низата
повеќе пати додека не се сортираат сите елементи.

*/

















