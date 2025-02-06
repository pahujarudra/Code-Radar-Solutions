#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    a & 128 ? printf("Set") : printf("Not Set"); 
    return 0;
}