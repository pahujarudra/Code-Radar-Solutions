#include <stdio.h>
#include <math.h>

int main() {
    int a, prime = 1;
    scanf("%d", &a);
    if(a <= 1)
    prime = 0;
    else {
        for(int i = 2; i <= sqrt(a); i++) {
            if(a % 2 == 0)
            prime = 0;
            break;
        }
    }
    
    prime == 0 ? printf("Not Prime") : printf("Prime");
    return 0;
}