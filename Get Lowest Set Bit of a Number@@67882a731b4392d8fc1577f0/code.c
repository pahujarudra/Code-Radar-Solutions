#include <stdio.h>

int main() {
    int num, a = 1, pos = 0;
    scand("%d", &num);
    while(!(num & a)) {
        a << 1;
        pos++;
    }
    printf("%d", pos);
    return 0;
}