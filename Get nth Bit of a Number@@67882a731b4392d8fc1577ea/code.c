#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a & (1 << b) ? printf("1") : printf("0");
    return 0;
}