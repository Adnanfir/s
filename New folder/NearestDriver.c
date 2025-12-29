#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, user;
    scanf("%d", &n);

    int drivers[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &drivers[i]);

    scanf("%d", &user);

    int idx = 0, min = abs(drivers[0] - user);

    for (int i = 1; i < n; i++) {
        if (abs(drivers[i] - user) < min) {
            min = abs(drivers[i] - user);
            idx = i;
        }
    }

    printf("Nearest Driver: %d\n", drivers[idx]);
    return 0;
}
