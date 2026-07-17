#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct linkedlist{
    int size;
    Node *head;
    Node *tail;
} linkedlist;

Node *createnode(int value){
    Node *node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    return node;
}

linkedlist *createLinklist(){
    linkedlist *list = malloc(sizeof(linkedlist));
    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void Insert(int value, int position, linkedlist *list){
    if (position < 0 || position > list->size)
        return;
    Node *node = createnode(value);
    if (position == 0) {
        node->next = list->head;
        list->head = node;
        if (list->size == 0)
            list->tail = node;
    } else if (position == list->size) {
        list->tail->next = node;
        list->tail = node;
    } else {
        Node *curr = list->head;
        for (int i = 0; i < position - 1; i++)
            curr = curr->next;
        node->next = curr->next;
        curr->next = node;
    }
    list->size++;
    printf("%d inserted at position %d\n", value, position);
}

void Delete(int position, linkedlist *list){
    if (list->size == 0 || position < 0 || position >= list->size)
        return;
    if (position == 0){
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
        list->size--;
        if (list->size == 0)
            list->tail = NULL;
        return;
    }
    Node *curr = list->head;
    for (int i = 0; i < position - 1; i++)
        curr = curr->next;
    Node *temp = curr->next;
    curr->next = temp->next;
    if (position == list->size - 1)
        list->tail = curr;
    free(temp);
    list->size--;
}

void printList(linkedlist *list){
    Node *curr = list->head;
    printf("List(size=%d): ", list->size);
    while (curr){
        printf("%d -> ", curr->value);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main(){
    linkedlist *list = createLinklist();
    Insert(33, 0, list);
    Insert(21, 1, list);
    Insert(24, 2, list);
    printList(list);
    Insert(100, 1, list);
    printList(list);
    Delete(2, list);
    printList(list);
    Delete(0, list);
    printList(list);
    Delete(list->size - 1, list);
    printList(list);
    return 0;
}