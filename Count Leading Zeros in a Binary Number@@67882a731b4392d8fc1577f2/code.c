#include <stdio.h>

int main() {
    int a, count = 0;
    scanf("%d", &a);
    while(a != 0) {
        if(a & (1 << 31))
        break;
        a >>= 1;
        count++;
    }
    printf("%d", 32 - count);
    return 0;
}