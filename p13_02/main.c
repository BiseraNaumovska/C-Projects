/*1.	Напиши функција pecatiListaNanazad која рекурзивно ги
 * печати елементите од листа наназад. Елементите на листата се
 * состојат од едно целоборјно поле broj и еден карактер кој се
 * вика karakter.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int broj;
    char karakter;
    struct Node *next;
} Node;

Node* dodadiNaPocetok(Node *head, int broj, char karakter) {
    Node *nov = (Node*)malloc(sizeof(Node));
    if (!nov) {
        printf("Neuspeshno alociranje na memorija.\n");
        exit(1);
    }
    nov->broj = broj;
    nov->karakter = karakter;
    nov->next = head;
    return nov;
}

void pecatiListaNanazad(Node *head) {
    if (head == NULL) {
        return;
    }

    pecatiListaNanazad(head->next);

    printf("%d %c\n", head->broj, head->karakter);
}

void oslobodiMemorija(Node *head) {
    Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    Node *head = NULL;

    head = dodadiNaPocetok(head, 4, 'D');
    head = dodadiNaPocetok(head, 3, 'C');
    head = dodadiNaPocetok(head, 2, 'B');
    head = dodadiNaPocetok(head, 1, 'A');

    printf("Elementite na listata nanazad se:\n");
    pecatiListaNanazad(head);

    oslobodiMemorija(head);

    return 0;
}
