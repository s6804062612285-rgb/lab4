#include <stdio.h>
int main() {
    char a;
    int b;
    scanf("%c %d", &a,&b);
    for (int i = 1; i <= b; i++) {
        printf("%c", a);
    }
    printf("\n");
    return 0;
}