/*Следниот пример ја користи променливата value од типот union number
 *  за да ја испечати вредноста зачувана во унијата еднаш како int
 *  вредност и еднаш како double вредност. Излезот од оваа програма
 *  зависи од имплементацијата. Излезот во овој случај ни прикажува
 *  дека внатрешната репрезентациј на  double  вредности во
 *  комјутерот може да биде доста различна од репрезентацијата на
 *  int вредности.*/
#include <stdio.h>

/* definicija na unija od broevi */
union number {
    int x;
    double y;
}; /* kraj na unijata number */

int main()
{
    union number value; /* definiraj promenliva koja e unija */

    value.x = 100; /* stavi cel broj vo unijata */
    printf( "%s\n%s\n%s%d\n%s%f\n\n",
           "Stavi cel broj vo celobrojniot chlen",
           "i ispechati gi dvata chlena.",
           "int:   ", value.x,
           "double:\n", value.y );

    value.y = 100.0; /* stavi double vo istata unija */
    printf( "%s\n%s\n%s%d\n%s%f\n",
           "Stavi realen broj vo unijata",
           "i ispechati gi dvata chlena.",
           "int:   ", value.x,
           "double:\n", value.y );

    return 0; /* uspeshen kraj */
}
