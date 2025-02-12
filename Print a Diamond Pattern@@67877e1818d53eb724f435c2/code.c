#include <stdio.h>

int main() {
    int n, r = 0;
    scanf("%d", &n);
    for(int i = 1; r ? i >= 1: i <= n; r ? i-- : i++) {
        if(i == n)
        r = 1;
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= i * 2 - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    // for(int a = n - 1; a >= 1; a--) {
    //     for(int j = 1; j <= n - a; j++) {
    //         printf(" ");
    //     }
    //     for(int k = 1; k <= a * 2 - 1; k++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    return 0;
}