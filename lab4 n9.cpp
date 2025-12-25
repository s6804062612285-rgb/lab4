#include <stdio.h>

int main() {
    int score;
    while (1) {
        scanf("%d", &score);

        if (score == -1) {
            break; 
        }
        if (score > 100) {
            printf("error score\n");
        } 
        else if (score < 0) {
            printf("error score\n");
        } 
        else {
            if (score >= 68) {
                if (score >= 80) {
                    printf("%d(A)\n", score);
                } 
                else if (score >= 70) {
                    printf("%d(B)\n", score);
                } 
                else {
                    printf("%d(C) ขาดอีก %d คะแนนได้ B\n", score, 70 - score);
                }
            } 
            else {
                if (score >= 50) {
                    printf("%d(D)\n", score);
                } 
                else {
                    printf("%d(F)\n", score);
                }
            }
        }
    }
    return 0;
}