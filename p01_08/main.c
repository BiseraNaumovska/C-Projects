/*
4. Напиши програм кој вчитува три цели броја и пресметува
нивна целобројна средна вредност, сума и производ.
*/

#include <stdio.h>

int main()
{
    int broj1, broj2, broj3;
    printf("Vnesi tri celi broja \n");
    scanf("%d%d%d", &broj1, &broj2, &broj3);
    int celobrojnaSrednaVrednost;
    int suma;
    int proizvod;

    suma = broj1 + broj2 + broj3;
    proizvod = broj1 * broj2 * broj3;
    celobrojnaSrednaVrednost = suma/3;

    printf("Suma = %d \n", suma);
    printf("Proizvod = %d \n", proizvod);
    printf("Celobrojna sredna vrednost = %d\n", celobrojnaSrednaVrednost);

    return 0;
}
