#include <stdio.h>

int main() {
    long long int a, num = 0, shift = 31;
    scanf("%d", &a);
    
    while(a != 0) {
        if(a & (1 << shift))
        num = (num * 10) + 1;
        else
        num = (num * 10);
        shift--;
        if(shift == -1)
        break;
    }
    printf("%d", num);
    return 0;
}