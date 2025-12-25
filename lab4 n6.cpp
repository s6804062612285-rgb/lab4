#include <stdio.h>

int main() {
    char ch;
    int n;
    scanf(" %c %d", &ch, &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}