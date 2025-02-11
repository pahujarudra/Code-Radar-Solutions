#include <stdio.h>

int main() {
    char c;
    scanf("%c", &a);
    switch(c) {
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
}