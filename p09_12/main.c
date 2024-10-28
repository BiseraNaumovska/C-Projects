/*12.Да се внесат два полинома со степени n m соодветно.
 * Да се внесат нивните коефициенти и да се најде нивниот збир.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=4,m=5; // polinomi na stepen 4 i 5
    int niza1[n+1]; // za slobodniot chlen
    int niza2[m+1]; // za sloboden chlen plus edno
    int stepen;


    printf("Vnesi chlenovi na prv polinom \n");
    for(int i=0;i<n+1;i++){
        scanf("%d", &niza1[i]);
    }
    printf("Vnesi chlenovi na vtor polinom \n");
    for(int i=0;i<m+1;i++){
        scanf("%d", &niza2[i]);
    }

    printf("Pechatenje na polinomi: \n");
    for(int i=0;i<n;i++){
        printf("%dx^%d ",niza1[i], i+1);
        if(i<n-1){
            printf(" + ");
        }
    }
    printf(" = %d \n", niza1[n]);

    for(int i=0;i<m;i++){
        printf("%dx^%d ",niza2[i], i+1);
        if(i<m-1){
            printf(" + ");
        }
    }
    printf(" = %d \n", niza2[m]);

    printf("\n");


    // e sega treba da gi soberam site clenovi

    if(n>m){
        stepen = n;
    }else{
        stepen = m;
    }
    int sum[stepen+1];
    for (int i = 0; i <= stepen; i++) {
        sum[i] = 0;
    }


    for (int i = 0; i <= stepen; i++) {
        if (i < n) {
            sum[i] += niza1[i]; // додавање на првиот полином
        }
        if (i < m) {
            sum[i] += niza2[i]; // додавање на вториот полином
        }
    }
    sum[stepen] =  niza1[n] + niza2[m]; // slobodniot chlen

    printf("Zbirot na dvata polinoma e: \n");
    for(int i=0;i<stepen;i++){
        printf("%dx^%d ",sum[i], i+1);
        if(i<stepen-1){
            printf(" + ");
        }
    }
    printf(" = %d \n", sum[stepen]);

    printf("\n");




    return 0;
}
