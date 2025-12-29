#include <stdio.h>

int main() {
    int servers, requests;
    scanf("%d %d", &servers, &requests);

    for (int i = 0; i < requests; i++)
        printf("Request %d -> Server %d\n", i+1, i % servers);

    return 0;
}
