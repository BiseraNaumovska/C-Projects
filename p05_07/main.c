/*2.      Програмот p05_03.c преработи го така да колонската
 * репрезентација на вредностите на депозитот за секоја година
 * биде порамнет одлево.*/
#include <stdio.h>
#include <math.h>

int main()
{
    double amount, principal = 1000.0, rate = 0.05;
    int year;
    printf("%4s%25s\n", "Godina" , "Vrednost na depozitot");
    for(year = 1; year<=10; year++){
        amount = principal*pow(1.0+rate, year);
        printf("%4d \t%-25.2f\n" , year, amount); //%25.2f izramnuvanje od desno a vkupno 25 pozicii, a za levo moze so %-25.2f
    }
    return 0;
}
