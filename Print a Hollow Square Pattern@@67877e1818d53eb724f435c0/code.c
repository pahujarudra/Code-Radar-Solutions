#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("*");
        for(int j = 1; j <= n - 2; j++) {
            if(i == 1 || i == n)
            printf("*");
            else
            printf(" ");
        }
        printf("*");
    }
    return 0;
}