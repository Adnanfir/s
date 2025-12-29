#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* LCA(struct Node* root, int p, int q) {
    while (root) {
        if (p < root->data && q < root->data)
            root = root->left;
        else if (p > root->data && q > root->data)
            root = root->right;
        else
            return root;
    }
    return NULL;
}

int main() {
    struct Node a = {20,NULL,NULL};
    struct Node b = {10,NULL,NULL};
    struct Node c = {30,NULL,NULL};

    a.left = &b;
    a.right = &c;

    struct Node* lca = LCA(&a, 10, 30);
    printf("LCA = %d\n", lca->data);

    return 0;
}
