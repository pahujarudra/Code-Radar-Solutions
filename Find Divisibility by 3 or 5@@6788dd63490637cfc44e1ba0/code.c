#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if(a % 3 == 0 && a % 5 == 0)
    printf("Divisible by Both");
    else if(a % 3 != 0 && a % 5 != 0)
    printf("Not Divisible");
    else
    a % 3 == 0 ? printf("Divisible by 3") : printf("Divisible by 5");
    return 0;
}