#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    if(c >= 'a' && c <= 'z')
    printf("Lowercase");
    else if(c >= 'A' && c <= 'Z')
    printf("Uppercase");
    else
    printf("Not an alphabet");
    return 0;
}