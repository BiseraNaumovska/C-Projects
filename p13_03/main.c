/*2.	Напиши програма која внесува елементи со функцијата vnesi
 * несортирано, на крајот на листата, ја користи функцијата sortOpagjanje
 * која сортира елементи во опаѓачки редослед, функцијата sortRastenje
 * која ги сортира елемнтите во растечки редослед, brisi која брише
 * елемент со дадена содржина. Елементите на листата се целобројни
 * елементи.*/
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int broj;
    struct Node *next;
} Node;


void vnesi(Node **head, int broj) {
    Node *nov = (Node *)malloc(sizeof(Node));
    if (!nov) {
        printf("Neuspeshno alociranje na memorija.\n");
        return;
    }
    nov->broj = broj;
    nov->next = NULL;

    if (*head == NULL) {
        *head = nov;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nov;
    }
}


void sortRastenje(Node **head) {
    Node *i, *j;
    int temp;
    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->broj > j->broj) {
                temp = i->broj;
                i->broj = j->broj;
                j->broj = temp;
            }
        }
    }
}


void sortOpagjanje(Node **head) {
    Node *i, *j;
    int temp;
    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->broj < j->broj) {
                temp = i->broj;
                i->broj = j->broj;
                j->broj = temp;
            }
        }
    }
}


void brisi(Node **head, int broj) {
    Node *temp = *head, *prev = NULL;


    if (temp != NULL && temp->broj == broj) {
        *head = temp->next;
        free(temp);
        return;
    }


    while (temp != NULL && temp->broj != broj) {
        prev = temp;
        temp = temp->next;
    }


    if (temp == NULL) {
        printf("Elementot %d ne e pronajden vo listata.\n", broj);
        return;
    }


    prev->next = temp->next;
    free(temp);
}


void pecati(Node *head) {
    while (head != NULL) {
        printf("%d ", head->broj);
        head = head->next;
    }
    printf("\n");
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
    int izbor, broj;

    do {
        printf("\n1. Vnesi element na krajot\n");
        printf("2. Sortiraj vo rastечки redosled\n");
        printf("3. Sortiraj vo opagjachki redosled\n");
        printf("4. Brishi element\n");
        printf("5. Pecati lista\n");
        printf("0. Izlez\n");
        printf("Izberi opcija: ");
        scanf("%d", &izbor);

        switch (izbor) {
        case 1:
            printf("Vnesi broj: ");
            scanf("%d", &broj);
            vnesi(&head, broj);
            break;
        case 2:
            sortRastenje(&head);
            printf("Listata e sortirana vo rastечки redosled.\n");
            break;
        case 3:
            sortOpagjanje(&head);
            printf("Listata e sortirana vo опаѓачки редослед.\n");
            break;
        case 4:
            printf("Vnesi broj za brishenje: ");
            scanf("%d", &broj);
            brisi(&head, broj);
            break;
        case 5:
            printf("Elementite vo listata se: ");
            pecati(head);
            break;
        case 0:
            printf("Izleguvanje od programata.\n");
            break;
        default:
            printf("Nevalidna opcija. Obidete se povtorno.\n");
        }
    } while (izbor != 0);


    oslobodiMemorija(head);

    return 0;
}
