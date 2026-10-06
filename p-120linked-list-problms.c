// problem link-> https://www.codechef.com/practice/course/linked-lists-new/LINKEDP04/problems/PREP55?tab=statement
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* removeDuplicates(struct Node* head) {
    if (head == NULL) return NULL;
    
    struct Node* current = head;
    while (current->next != NULL) {
        if (current->data == current->next->data) {
            struct Node* temp = current->next;
            current->next = current->next->next;
            free(temp); 
        } else {
            current = current->next;
        }
    }
    return head;
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int N;
        scanf("%d", &N); 

        if (N <= 0) continue;

        int val;
        scanf("%d", &val);
        struct Node* head = createNode(val);
        struct Node* tail = head;

        for (int i = 1; i < N; i++) {
            scanf("%d", &val);
            tail->next = createNode(val);
            tail = tail->next;
        }

        head = removeDuplicates(head);

        printList(head);
    }

    return 0;
}