#include <stdio.h>

int main() {
    int n, r = 1;
    scanf("%d", &n);
    for(int i = 1; i >= 1 && i <= n; i += r) {
        if(i == n)
        r = -1;
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i * 2 - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}