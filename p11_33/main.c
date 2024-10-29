/*3. Да се пронајдат на Интернет кодовите за бројки и букви во
 * Морзеовата азбука. Да се напише програм кој чита текст фраза и
 * ја дава нејзината вредност во Морзеовата азбука. Да се направи
 * и друга функција на која и се предава Морзеов текст, а треба
 * како резултат да се добие текст фраза во говорен јазик.*/
/*
Морзеов код:
A: .-
B: -...
C: -.-.
D: -..
E: .
F: ..-.
G: --.
H: ....
I: ..
J: .---
K: -.-
L: .-..
M: --
N: -.
O: ---
P: .--.
Q: --.-
R: .-.
S: ...
T: -
U: ..-
V: ...-
W: .--
X: -..-
Y: -.--
Z: --..

0: -----
1: .----
2: ..---
3: ...--
4: ....-
5: .....
6: -....
7: --...
8: ---..
9: ----.
*/

#include <stdio.h>
#include <string.h>

#define MAX_MORSE_LENGTH 1000

// Морзе кодови за букви и броеви
char *morseCode[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", // A-J
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",   // K-T
    "..-", "...-", ".--", "-..-", "-.--", "--..",                          // U-Z
    "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----." // 0-9
};

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

void textToMorse(char *text) {
    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        if (ch >= 'a' && ch <= 'z') {
            ch -= 32;
        }

        if (ch >= 'A' && ch <= 'Z') {
            printf("%s ", morseCode[ch - 'A']);
        } else if (ch >= '0' && ch <= '9') {
            printf("%s ", morseCode[ch - '0' + 26]);
        } else if (ch == ' ') {
            printf("/ ");
        }
    }
    printf("\n");
}


void morseToText(char *morse) {
    char *token = strtok(morse, " ");
    while (token != NULL) {
        if (strcmp(token, "/") == 0) {
            printf(" ");
        } else {

            for (int i = 0; i < 36; i++) {
                if (strcmp(token, morseCode[i]) == 0) {
                    printf("%c", alphabet[i]);
                    break;
                }
            }
        }
        token = strtok(NULL, " ");
    }
    printf("\n");
}

int main() {
    char text[100];
    char morse[MAX_MORSE_LENGTH];

    printf("Vnesete tekst za konverzija vo Morze: ");
    fgets(text, sizeof(text), stdin);
    text[strlen(text) - 1] = '\0';

    printf("Morseov kod: ");
    textToMorse(text);

    printf("Vnesete Morze kod za konverzija vo tekst (so / za prostor): ");
    fgets(morse, sizeof(morse), stdin);
    morse[strlen(morse) - 1] = '\0';

    printf("Konvertiran tekst: ");
    morseToText(morse);

    return 0;
}
