#include <stdio.h>

int main() {
    int a, count = 0;
    scanf("%d", &a);
    while((a&1) == 0) {
        a >>= 1;
        count++;
    }
    printf("%d", 32 - count);
    return 0;
}