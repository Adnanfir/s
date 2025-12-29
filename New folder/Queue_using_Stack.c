#include <stdio.h>

int s1[100], s2[100];
int top1 = -1, top2 = -1;

void enqueue(int x) {
    s1[++top1] = x;
}

int dequeue() {
    if (top2 == -1) {
        while (top1 != -1)
            s2[++top2] = s1[top1--];
    }
    return s2[top2--];
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    printf("%d\n", dequeue());
    return 0;
}
