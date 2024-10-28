/*
4. Да се напише програма која во главната функција внесува број на
редици и колони на дводимензионална матрица. Во функцијата vnesiMatrica
внесува елементи, а преку функцијата pechatiMatrica ги печати елементите
во табеларна форма.

а) Да се напишат итеративни верзии на двете функции.
б) Да се напишат рекурзивни верзии на двете функции.

*/
#include <stdio.h>

void vnesiMatricaIterativno( int r, int k, int matrica[r][k]);
void vnesiMatricaRekurzivno( int r, int k,int matrica[r][k], int i, int j);

void pechatiMatricaIterativno( int r, int k, int matrica[r][k]);
void pechatiMatricaRekurzivno( int r, int k,int matrica[r][k], int i, int j);

int main()
{
    int r,k;
    printf("Vnesi broj na redici!\n");
    scanf("%d", &r);
    printf("Vnesi broj na koloni\n");
    scanf("%d",&k);

    int matrica[r][k];

    printf("Vnesuvanje na elementi na matrica Iterativno: \n");
    vnesiMatricaIterativno(r,k,matrica);
    printf("Pechatenje matrica Iterativno: \n");
    pechatiMatricaIterativno(r,k, matrica);
    printf("\n");


    printf("Vnesuvanje na elementi na matrica Rekurzivno: \n");
    vnesiMatricaRekurzivno(r,k,matrica,0,0);
    printf("Pechatenje matrica Rekurzivno: \n");
    pechatiMatricaRekurzivno(r,k,matrica,0,0);
    printf("\n");

    return 0;
}

void vnesiMatricaIterativno( int r, int k, int matrica[r][k]){
    for(int i=0;i<r;i++){
        for(int j=0;j<k;j++){
            scanf("%d", &matrica[i][j]);
        }
    }


}

void pechatiMatricaIterativno( int r, int k, int matrica[r][k]){
    for(int i=0;i<r;i++){
        for(int j=0;j<k;j++){
            printf("%7d", matrica[i][j]);
        }
        printf("\n");
    }
}

void vnesiMatricaRekurzivno( int r, int k,int matrica[r][k], int i, int j){
    if(i == r) return; // bazichen sluchaj
    if(j<k){
        printf("Vnesi elementi \n");
        scanf("%d", &matrica[i][j]);
        vnesiMatricaRekurzivno(r,k,matrica,i,j+1);
    }else{
        vnesiMatricaRekurzivno(r,k,matrica,i+1,0);
    }
}


void pechatiMatricaRekurzivno(int r, int k, int matrica[r][k], int i, int j) {
    if (i == r) return;

    if (j < k) {
        printf("%7d", matrica[i][j]);
        pechatiMatricaRekurzivno( r, k,matrica, i, j + 1);
    } else {
        printf("\n");
        pechatiMatricaRekurzivno(r, k, matrica, i + 1, 0);
    }
}



