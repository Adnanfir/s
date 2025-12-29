#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

int height(struct Node* root) {
    if (!root) return 0;
    int l = height(root->left);
    int r = height(root->right);
    if (l == -1 || r == -1 || abs(l - r) > 1)
        return -1;
    return 1 + (l > r ? l : r);
}

int main() {
    struct Node a = {1,NULL,NULL};
    struct Node b = {2,NULL,NULL};
    struct Node c = {3,NULL,NULL};

    a.left = &b;
    b.left = &c;

    if (height(&a) != -1)
        printf("Balanced\n");
    else
        printf("Not Balanced\n");

    return 0;
}
