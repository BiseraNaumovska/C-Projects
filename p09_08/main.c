/*
8.Да се најдат природните броеви чиј квадрат и куб
(заедно) ги содржат сите цифри 0,1, 2, .. , 9 по еднаш.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int siteCifri(char str[]);

int main()
{
    int n = 1;

    while (1) {
        long long kvadrat = n * n;
        long long kub = n * n * n;

        // pretvaranje na kub i kvadrat vo stringovi
        char kombinacija[50];
        sprintf(kombinacija, "%lld%lld", kvadrat, kub);

        // Ako se naogjaat 0-9 ednash
        if (strlen(kombinacija) == 10 && siteCifri(kombinacija)) {
            printf("Brojot n = %d ima kvadrat %lld i kub %lld koi zaedno gi sodrzat site cifri od 0 do 9.\n", n, kvadrat, kub);
            break;
        }

        n++;
    }
    return 0;
}


int siteCifri(char str[]) {
    int digits[10] = {0};


    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            digits[str[i] - '0']++;
        }
    }


    for (int i = 0; i < 10; i++) {
        if (digits[i] != 1) {
            return 0;
        }
    }
    return 1;
}
