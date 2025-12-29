#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

int main() {
    struct Node a = {1, NULL, NULL};
    struct Node b = {2, NULL, NULL};
    struct Node c = {3, NULL, NULL};

    a.left = &b;
    a.right = &c;

    struct Node* stack[100];
    int top = -1;
    stack[++top] = &a;

    while (top != -1) {
        struct Node* node = stack[top--];
        printf("%d ", node->data);
        if (node->right) stack[++top] = node->right;
        if (node->left) stack[++top] = node->left;
    }
    return 0;
}
