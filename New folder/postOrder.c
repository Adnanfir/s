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

    struct Node* s1[100];
    struct Node* s2[100];
    int t1 = -1, t2 = -1;

    s1[++t1] = &a;

    while (t1 != -1) {
        struct Node* node = s1[t1--];
        s2[++t2] = node;
        if (node->left) s1[++t1] = node->left;
        if (node->right) s1[++t1] = node->right;
    }

    while (t2 != -1)
        printf("%d ", s2[t2--]->data);

    return 0;
}
