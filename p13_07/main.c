/*1.	Напиши програм кој внесува линија текст и користи стек за да се испечати
 * текстот во обратен дерослед. Текстот да содржи и празни места.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


typedef struct {
    char items[MAX];
    int top;
} Stack;


void initStack(Stack *s) {
    s->top = -1;
}


int isFull(Stack *s) {
    return s->top == MAX - 1;
}


int isEmpty(Stack *s) {
    return s->top == -1;
}


void push(Stack *s, char value) {
    if (isFull(s)) {
        printf("Stekot e poln. Ne moze da se dodade poveke elementi.\n");
    } else {
        s->items[++(s->top)] = value;
    }
}


char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stekot e prazеn. Ne moze da se otstrani element.\n");
        return '\0';
    } else {
        return s->items[(s->top)--];
    }
}

int main() {
    Stack s;
    char line[MAX];
    int i;


    initStack(&s);


    printf("Vnesi linija tekst: ");
    fgets(line, MAX, stdin);


    for (i = 0; i < strlen(line); i++) {
        push(&s, line[i]);
    }


    printf("Tekstot vo obraten redosled e: ");
    while (!isEmpty(&s)) {
        printf("%c", pop(&s));
    }
    printf("\n");

    return 0;
}
