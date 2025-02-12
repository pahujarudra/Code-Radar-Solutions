#include <stdio.h>

int main() {
    int n;
    char c = 'A';
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c ", c + j - 1);
        }
        printf("\n");
    }
}