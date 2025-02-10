#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a * b > 0 ? printf("Same Sign") : printf("Different Sign");
    return 0;
}