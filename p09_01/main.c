/*
1.Да се најде обиколката и плоштината на правилен n-аголник.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float strana;
    printf("Vnesi n-agolnikot so kolku strani ke bide: ");
    scanf("%d", &n);
    printf("Vnesi strana na mnoguagolnikot: ");
    scanf("%f", &strana);

    float Perimetar;
    float Ploshtina;
    float pi = 3.14;

    Perimetar = n*strana;
    Ploshtina = (n*pow(strana,2))/(4*tan(pi/n));

    printf("Ploshtina = %.3f \n", Ploshtina);
    printf("Perimetar = %.3f \n", Perimetar);


    return 0;
}
