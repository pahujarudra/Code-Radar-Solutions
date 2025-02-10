#include <stdio.h>

int main() {
    int a, prime = 1;
    scanf("%d", &a);
    if(a == 1)
    prime = 0;
    for(int i = 2; i <= a ** 0.5 + 1; i++) {
        if(a % 2 == 0)
        prime = 0;
    }
    prime == 0 : printf("Not Prime") : printf("Prime");
    return 0;
}