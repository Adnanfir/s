#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void palindrome_Checker(char *string, int le) {
    bool p = true;
    for (int i = 0; i < le / 2; i++) {
        if (string[i] != string[le - i - 1]) {
            p = false;
            break;
        }
    }
    if (p) {
        printf("String is a palindrome");
    } else {
        printf("String is not a palindrome");
    }

}int main() {
    char string[20] = {};
    printf("Enter the string: ");
    scanf("%s", string);
    int le = strlen(string);
    palindrome_Checker(string, le);
    return 0;
}