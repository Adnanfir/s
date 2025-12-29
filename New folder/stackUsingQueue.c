#include <stdio.h>

int q1[100], q2[100];
int f1 = 0, r1 = -1, f2 = 0, r2 = -1;

void push(int x) {
    q2[++r2] = x;
    while (f1 <= r1)
        q2[++r2] = q1[f1++];
    f1 = 0; r1 = r2;
    for (int i = 0; i <= r2; i++)
        q1[i] = q2[i];
    r2 = -1;
}

int pop() {
    return q1[f1++];
}

int main() {
    push(5);
    push(10);
    push(15);

    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}
