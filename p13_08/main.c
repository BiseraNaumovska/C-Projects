/*3.	Напиши програм кој врши бришење од дрво, така да структурата на дрвото не се губи.
 * Секоја од користените функции да се објасни. (помош: користете web решенија за binary tree delete)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *left, *right;
} Node;

Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->value) {
        root->left = insert(root->left, value);
    } else if (value > root->value) {
        root->right = insert(root->right, value);
    }
    return root;
}

Node* findMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int value) {
    if (root == NULL) {
        return root;
    }
    if (value < root->value) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->value) {
        root->right = deleteNode(root->right, value);
    } else {
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = findMin(root->right); // Наоѓање на минималниот јазел од десното поддрво
        root->value = temp->value; // Копирање на вредноста од минималниот јазел
        root->right = deleteNode(root->right, temp->value); // Бришење на минималниот јазел
    }
    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->value);
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;
    int choice, value;


    while (1) {
        printf("\n1. Vnesi jazel\n2. Izbrishi jazel\n3. Pecati (Inorder)\n0. Izlez\n");
        printf("Izbor: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Vnesi vrednost: ");
            scanf("%d", &value);
            root = insert(root, value);
            break;
        case 2:
            printf("Vnesi vrednost za brishenje: ");
            scanf("%d", &value);
            root = deleteNode(root, value);
            break;
        case 3:
            printf("Elementite na drvoto (Inorder): ");
            inorder(root);
            printf("\n");
            break;
        case 0:
            printf("Izleguvanje...\n");
            exit(0);
        default:
            printf("Nevaliden izbor. Obidete se povtorno.\n");
        }
    }
    return 0;
}
