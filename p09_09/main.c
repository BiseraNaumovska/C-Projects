/*

9. Секоја од n бактерии се дели на две на секои i
минути, додека на секои j минути изумираат x% од
живите бактерии во тој момент. Колку бактерии
ќе има по k минути?

*/

#include <stdio.h>

int main()
{
    int n=3, i=2, j=3, k=50;
    float x=20.0;
    printf("Vnesi broj na bakterii: ");
    //scanf("%d", &n);
    printf("Vnesi broj na minuti za podelba na bakterii (i): ");
    //scanf("%d", &i);
    printf("Vnesi broj na minuti za izumiranje na bakterii (j): ");
    //scanf("%d", &j);
    printf("Vnesi procent na izumirani bakterii (x): ");
    //scanf("%f", &x);
    printf("Vnesi vkupno minuti (k): ");
    //scanf("%d", &k);

    int brojBakterii = n;
    for(int vreme=1; vreme <= k; vreme++){
        if( vreme%i == 0){
            brojBakterii *= 2;
        }
        if(vreme%j == 0){
            brojBakterii -= brojBakterii * (x/100);
        }
    }
    printf("Po %d minuti, imame %d bakterii.\n", k, brojBakterii);

    return 0;
}
