#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i * 2 - 1; k++) {
            printf("*");
        }
    }
    for(int a = n - 1; a >= 1; a--) {
        for(int j = 1; j <= n - a; j++) {
            printf(" ");
        }
        for(int k = 1; k <= a * 2 - 1; k++) {
            printf("*");
        }
    }
    return 0;
}