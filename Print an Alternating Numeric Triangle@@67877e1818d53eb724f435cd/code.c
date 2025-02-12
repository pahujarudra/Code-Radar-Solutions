#include <stdio.h>

int main() {
    int n, a;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        a = (i % 2 == 0) ? 0 : 1;
        for(int j = 1; j <= i; j++) {
            printf("%d ", a);
            a = 1 - a;
        }
        printf("\n");
    }
    return 0;
}