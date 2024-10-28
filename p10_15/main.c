/*

Проект 2:
Да се модифицира програмот за делење карти така да по мешањето подели 5 карти од рака за покер. Да се одреди дали раката содржи:
а) пар.
б) два пара
в) трилинг (пр. три десетки)
г) четири карти од ист број (пр. четири асови)
д) боја (сите пет карти да се од иста боја, на пр, детелина)
ѓ) кента (5 подредени карти од иста боја, пр. 3,4,5,6,7 срце)

Проект 2а:
Претходниот проект да се дополни со делење на карти на двајца играчи (две раце) и при тоа да се одреди кој од нив победил.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void meshaj(int wDeck[][13]);
void deliDveRaci(const int wDeck[][13], const char *wFace[], const char *wSuit[], int hand1[][2], int hand2[][2]);
int proveriPar(int hand[][2]);
int proveriDvaPara(int hand[][2]);
int proveriTriling(int hand[][2]);
int proveriKare(int hand[][2]);
int proveriBoja(int hand[][2]);
int proveriKenta(int hand[][2]);
int vrednostRaka(int hand[][2]);

int main()
{
    const char *boja[4] = {"Srce", "Karo", "List", "Detelina"};
    const char *brojka[13] = {"As", "Dva", "Tri", "Chetiri", "Pet", "Shest", "Sedum", "Osum", "Devet", "Deset", "Dzandar", "Dama", "Pop"};

    int spil[4][13] = {0};

    int hand1[5][2], hand2[5][2];

    srand(time(0));

    meshaj(spil);

    printf("Kartite na igrac 1:\t\t\t");
    printf("Kartite na igrac 2:\n");
    printf("--------------------\t\t\t");
    printf("--------------------\n");
    deliDveRaci(spil, brojka, boja, hand1, hand2);

    int score1 = vrednostRaka(hand1);
    int score2 = vrednostRaka(hand2);

    if (score1 > score2)
        printf("\nIgrac 1 pobedi!\n");
    else if (score2 > score1)
        printf("\nIgrac 2 pobedi!\n");
    else
        printf("\nNeresheno!\n");

    return 0;
}

void meshaj(int wDeck[][13])
{
    int row;
    int column;
    int card;

    for (card = 1; card <= 52; card++)
    {
        do
        {
            row = rand() % 4;
            column = rand() % 13;
        } while (wDeck[row][column] != 0);

        wDeck[row][column] = card;
    }
}

void deliDveRaci(const int wDeck[][13], const char *wFace[], const char *wSuit[], int hand1[][2], int hand2[][2])
{
    int card = 0;
    int row;
    int column;
    int handCount1 = 0, handCount2 = 0;
    int turn = 1;

    for (card = 1; card <= 52; card++)
    {
        for (row = 0; row < 4; row++)
        {
            for (column = 0; column < 13; column++)
            {
                if (wDeck[row][column] == card)
                {
                    if (turn == 1 && handCount1 < 5)
                    {
                        hand1[handCount1][0] = row;
                        hand1[handCount1][1] = column;
                        printf("Igrac 1: %8s %-8s\t\t", wFace[column], wSuit[row]);
                        handCount1++;
                        turn = 2;
                    }
                    else if (turn == 2 && handCount2 < 5)
                    {
                        hand2[handCount2][0] = row;
                        hand2[handCount2][1] = column;
                        printf("Igrac 2: %8s %-8s\n", wFace[column], wSuit[row]);
                        handCount2++;
                        turn = 1;
                    }

                    if (handCount1 == 5 && handCount2 == 5)
                        return;
                }
            }
        }
    }
}


int vrednostRaka(int hand[][2])
{
    if (proveriKenta(hand))
        return 8; // Kenta
    if (proveriBoja(hand))
        return 7; // Boja
    if (proveriKare(hand))
        return 6; // Kare
    if (proveriTriling(hand))
        return 5; // Triling
    if (proveriDvaPara(hand))
        return 4; // Dva para
    if (proveriPar(hand))
        return 3; // Par

    return 1;
}

int proveriPar(int hand[][2])
{
    int count[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        count[hand[i][1]]++;
    }
    for (int i = 0; i < 13; i++)
    {
        if (count[i] == 2)
            return 1;
    }
    return 0;
}

int proveriDvaPara(int hand[][2])
{
    int count[13] = {0};
    int pairs = 0;
    for (int i = 0; i < 5; i++)
    {
        count[hand[i][1]]++;
    }
    for (int i = 0; i < 13; i++)
    {
        if (count[i] == 2)
            pairs++;
    }
    return pairs == 2;
}

int proveriTriling(int hand[][2])
{
    int count[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        count[hand[i][1]]++;
    }
    for (int i = 0; i < 13; i++)
    {
        if (count[i] == 3)
            return 1;
    }
    return 0;
}

int proveriKare(int hand[][2])
{
    int count[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        count[hand[i][1]]++;
    }
    for (int i = 0; i < 13; i++)
    {
        if (count[i] == 4)
            return 1;
    }
    return 0;
}

int proveriBoja(int hand[][2])
{
    int suit = hand[0][0];
    for (int i = 1; i < 5; i++)
    {
        if (hand[i][0] != suit)
            return 0;
    }
    return 1;
}

int proveriKenta(int hand[][2])
{
    int count[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        count[hand[i][1]]++;
    }

    int consecutive = 0;
    for (int i = 0; i < 13; i++)
    {
        if (count[i] == 1)
            consecutive++;
        else
            consecutive = 0;

        if (consecutive == 5)
            return 1;
    }
    return 0;
}
