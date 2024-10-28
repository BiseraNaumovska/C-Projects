/*
2. Да се реши систем од три равенки со три непознати.

2x  +  3y  +z  =  1
4x  +  y   −z  =  −2
−2x +  y   +3  z  =3

matrica A = koeficienti
matrica X = x,y,z
matrica ​B = 1, -2, 3 = rezultati

GAUSOV METOD



*/

#include <stdio.h>

void GausovMetod(float matrica[3][4]);

int main()
{
    float matrica[3][4] = { {2,3,1,1} , {4,1,-1,-2} , {-2,1,3,3}  };

    GausovMetod(matrica);
    return 0;
}

void GausovMetod(float matrica[3][4]){
    int i,j,k;
    float ratio;

    for(i=0;i<3; i++){  // se dodeka ne dojde do brojot na redici
        float diagonala = matrica[i][i];
        if (diagonala == 0) {
            printf("Delenje so nula.\n");
            return;
        }
        for(j=0;j<4;j++){
            matrica[i][j] /= diagonala;
        }
        //sega treba da se napravat site ostanati nuli vo taa kolona
        for(j=0;j<3;j++){
            if(j != i){
                ratio = matrica[j][i];
                for(k=0;k<4;k++){
                    matrica[j][k] -= ratio * matrica[i][k];
                }
            }
        }
    }
    printf("Reshenie: \n");
    for(i=0;i<3;i++){
        printf("x%d = %.2f\n", i + 1, matrica[i][3]);
    }

}
