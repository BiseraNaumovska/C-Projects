/*3.Напиши програма која на функцијата obratno и доделува цел број.
 * Оваа функција го враќа бројот напишан со обратни цифри, т.е.
 * ако сме ја повикале функцијата со параметарот 1243, треба да
 * врати 3421.*/

#include <stdio.h>

int obratno (int broj);

int main()
{
    int broj;
    printf("Vnesi broj \n");
    scanf("%d", &broj);
    printf("Brojot %d naopachki e %d \n", broj, obratno(broj));

    return 0;
}

int obratno(int broj){
    int obratenBroj = 0;
    while (broj != 0){
        int cifra = broj % 10;
        obratenBroj = obratenBroj*10 + cifra;
        broj = broj / 10;
    }
    return obratenBroj;
}
