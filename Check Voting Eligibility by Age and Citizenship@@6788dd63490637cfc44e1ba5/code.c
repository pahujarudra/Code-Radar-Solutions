#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a >= 18 && b ? printf("Eligible") : printf("Not Eligible");
    return 0;
}