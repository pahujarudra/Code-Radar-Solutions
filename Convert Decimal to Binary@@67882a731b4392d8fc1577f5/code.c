#include <stdio.h>

int main() {
    int a, num = 0;
    scanf("%d", &a);
    
    while(a != 0) {
        if(a & (1 << 31))
        num = (num * 10) + 1;
        else
        num = (num * 10);
    }
    printf("%d", num);
    return 0;
}