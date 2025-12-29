#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Node *head = NULL, *temp, *prev = NULL;

    for (int i = 0; i < n; i++) {
        temp = malloc(sizeof(struct Node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        if (!head) head = temp;
        else prev->next = temp;
        prev = temp;
    }

    struct Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("Middle Element: %d\n", slow->data);
    return 0;
}
