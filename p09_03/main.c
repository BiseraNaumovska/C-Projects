/*3.	Да се најде спротивен број на природниот број n.
 * (Тоа е природниот број што ги има истите цифри со n,
 * напишани во спротивен редослед.)*/


#include <stdio.h>

int main()
{
    int n;
    int broj;
    int obraten = 0;
    printf("Vnesi broj \n");
    scanf("%d", &n);

    while(n != 0){
        broj = n % 10;
        obraten = obraten * 10 + broj;
        n = n/10;
    }
    printf("Obraten = %d \n", obraten);

    return 0;
}
