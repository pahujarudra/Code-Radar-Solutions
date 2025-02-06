#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    a & 10000000 ? printf("Set") : printf("Not Set"); 
    return 0;
}