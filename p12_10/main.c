/*2. Напиши програм кој го превртува редоследот на битовите на
 * целобројна unsigned вредност. Програмот треба да вчита вредност
 * од корисникот и да ја повика функцијата prevtriBitovi за да се
 * испечатат битовите во обратен редослед. Вредностите на битовите
 * да се испечатат и пред и после превртувањето.*/

#include <stdio.h>

typedef struct {
    unsigned int original;
    unsigned int prevrtano;
} Bitovi;


void prikaziBitovi(unsigned int broj) {
    for (int i = sizeof(broj) * 8 - 1; i >= 0; i--) {
        printf("%d", (broj >> i) & 1);
    }
    printf("\n");
}

unsigned int prevtriBitovi(unsigned int broj) {
    unsigned int prevrtano = 0;
    int brojBitovi = sizeof(broj) * 8;

    for (int i = 0; i < brojBitovi; i++) {
        if ((broj >> i) & 1) {
            prevrtano |= 1 << (brojBitovi - 1 - i);
        }
    }

    return prevrtano;
}

int main() {
    Bitovi bs;

    printf("Vnesi ja unsigned celobrojnata vrednost: ");
    scanf("%u", &bs.original);

    bs.prevrtano = prevtriBitovi(bs.original);

    printf("Bitovite pred prevrtuvanjeto: ");
    prikaziBitovi(bs.original);

    printf("Bitovite posle prevrtuvanjeto: ");
    prikaziBitovi(bs.prevrtano);

    return 0;
}
