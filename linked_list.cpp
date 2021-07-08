#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <malloc.h>

using namespace std;

typedef struct Node {
    int data;
    struct Node *next;
};
Node *head;

int main() {
    head = (Node*) malloc(sizeof(Node));
    Node *node1 = (Node*) malloc(sizeof(Node));
    node1->data = 1;
    Node *node2 = (Node*) malloc(sizeof(Node));
    node2->data = 2;
    head->next = node1;
    node1->next = node2;
    node2->next = NULL;
    Node *cur = head->next;
    while (cur != NULL) {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    system("pause");
    return 0;
}