/*
13.	Да се генерираат следниве дводимензионални полиња со m-редици и
n-колони.
1	12	13	->		...
2	11	14			...
3	10	15			...
4	9	16			...
5	8	17			...
6	7	18	19	->	

*/

#include <stdio.h>

int main()
{
    // m -redici, n -koloni
    int m=5, n=12;
    int matrica[m][n];
    int num = 1;

    printf("Popolnuvanje na matricata : \n");
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) { // Parna kolona
            for (int i = 0; i < m; i++) {
                matrica[i][j] = num++;
            }
        } else { // Neparna kolona
            for (int i = m - 1; i >= 0; i--) {
                matrica[i][j] = num++;
            }
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrica[i][j]);
        }
        printf("\n");
    }


    return 0;
}
