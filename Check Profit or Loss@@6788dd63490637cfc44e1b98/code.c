#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a > b ? printf("Loss") : (a == b ? printf("No Profit No Loss") : printf("Profit"));
    return 0;
}