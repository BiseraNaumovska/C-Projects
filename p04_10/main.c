/*
8.Една стоковна куќа продава 5 производи чии цени се дадени во
долната табела

Производ број       Цена
    1               50.5
    2               45.6
    3               32.8
    4               65.3
    5               20.0

Да се напише програм кој чита серија од парови броеви за:
а) број на производ
б) количина продадена во текот на денот
Програмот треба да ја користи switch наредбата за да ја одреди цената
за секој  производ. Програмот треба да ја пресмета и испечати вкупната
продадена вредност за секој од производите посебно, како и вкупната
сума за сите производи продадени во текот на денот.

*/

#include <stdio.h>

int main()
{
    int proizvod_broj, kolichina;
    float cena, vkupna_cena = 0.0;
    int i = 0;
    int kupuvaci;
    int p1 = 0,p2 = 0,p3 = 0,p4 = 0,p5 = 0;

    printf("Vnesi kolku kupuvachi ke pazaruvaat: ");
    scanf("%d", &kupuvaci);

    while(kupuvaci > 0){
        i++;
        printf("Vnesi koj proizvod saka da go kupi kupuvachot: ");
        scanf("%d", &proizvod_broj);
        printf("Vnesi kolichina od proizvodot: ");
        scanf("%d", &kolichina);

        switch(proizvod_broj){
        case 1:
            cena = 50.5;
            p1 = p1 + kolichina;
            break;
        case 2:
            cena = 45.6;
            p2 = p2 + kolichina;
            break;
        case 3:
            cena = 32.8;
            p3 = p3 + kolichina;
            break;
        case 4:
            cena = 65.3;
            p4 = p4 + kolichina;
            break;
        case 5:
            cena = 20.0;
            p5 = p5 + kolichina;
            break;
        default:
            printf("Vnesovte proizvod shto ne postoi vo ovaa prodavnica \n");
        }

        printf("Kupuvachot %d kupil od proizvod %d vkupno %d proizvodi i potroshil %.3f pari \n", i, proizvod_broj, kolichina, kolichina*cena);
        kupuvaci--; // se namaluva brojot
        vkupna_cena = vkupna_cena + (kolichina*cena);


    }

    printf("Prodadena kolichina na: \nProizvod1 = %d \nProizvod2 = %d \nProizvod3 = %d\nProizvod4 = %d\nProizvod5 = %d\n", p1,p2,p3,p4,p5);
    printf("Promet vo denot: %.3f \n", vkupna_cena);





    return 0;
}
