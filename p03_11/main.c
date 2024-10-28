/*
6. Напишете програма која од стандардниот влез зема 5 букви и ги испечатува по следниот редослед: прво петтата, па третата, па втората, па првата, па четвртата буква. Пример:
vnesi pet bukvi
prva bukva: e
vtora bukva: i
treta bukva: b
chetvrta  bukva: n
petta bukva: p
Se dobi: pbien
*/
#include <stdio.h>

int main()
{
    char c1,c2,c3,c4,c5;
    printf("Vnesi 5 bukvi\n");
    scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);

    printf("%c%c%c%c%c\n", c5,c3,c2,c1,c4);
    return 0;
}
